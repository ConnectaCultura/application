#include "pch.h"
#include "CercadoraCompra.h"

List<PassarelaCompra^>^ CercadoraCompra::CercaPerEsdeveniment(System::String^ esdeveniment) {
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Compra";
	MySqlDataReader^ dataReader = con->executar(sql);
	List<PassarelaCompra^>^ vt = gcnew List<PassarelaCompra^>();
	while (dataReader->Read()) {
		// Agafarem les columnes per �ndex, la primera �s la 0
		System::String^ correu = dataReader->GetString(0);
		System::String^ nom = dataReader->GetString(1);
		System::String^ dataini = dataReader->GetString(2);
		System::String^ datafi = dataReader->GetString(3);
		float preu = Convert::ToSingle(dataReader->GetString(4));

		vt->Add(gcnew PassarelaCompra (correu, nom, dataini, datafi, preu));
	}
	con->tancarConnexio();
	return vt;
}

PassarelaCompra^ CercadoraCompra::CercaCompra(System::String^ Ciutada, System::String^ esdeveniment, System::String^ data_inici, System::String^ data_fi) {
	System::String^ dia = data_inici->Substring(0, 2);
	System::String^ mes = data_inici->Substring(3, 2);
	System::String^ a�o = data_inici->Substring(6, 4);

	// Construir la nueva cadena con el formato deseado
	System::String^ iniciMySQL = a�o + "-" + mes + "-" + dia + " 00:00:00";

	System::String^ _dia = data_fi->Substring(0, 2);
	System::String^ _mes = data_fi->Substring(3, 2);
	System::String^ _a�o = data_fi->Substring(6, 4);

	// Construir la nueva cadena con el formato deseado
	System::String^ fiMySQL = _a�o + "-" + _mes + "-" + _dia + " 00:00:00";

	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Compra WHERE correuciutada = '" + Ciutada + "'AND nomesdev = '" + esdeveniment + "' AND data_inici ='" + iniciMySQL + "' AND data_fi = '" + fiMySQL + "'";
	MySqlDataReader^ dataReader = con->executar(sql);
	if (dataReader->Read()) {
		System::String^ correuCiu = dataReader->GetString(0);
		System::String^ esdeve = dataReader->GetString(1);
		System::String^ dataini = dataReader->GetString(2);
		System::String^ datafi = dataReader->GetString(3);
		float preu = 0;
		if (!dataReader->IsDBNull(5)) {
			preu = dataReader->GetFloat(5);
		}
		con->tancarConnexio();
		return gcnew PassarelaCompra(correuCiu, esdeve, dataini, datafi, preu);
	}
}