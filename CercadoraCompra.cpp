#include "pch.h"
#include "CercadoraCompra.h"

List<PassarelaCompra^>^ CercadoraCompra::CercaPerEsdeveniment(System::String^ esdeveniment, System::String^ inici, System::String^ fi) {
	DateTime iniciDateTime = DateTime::Parse(inici);
	DateTime fiDateTime = DateTime::Parse(fi);
	System::String^ data_inici_sql = iniciDateTime.ToString("yyyy-MM-dd HH:mm:ss");
	System::String^ data_fi_sql = fiDateTime.ToString("yyyy-MM-dd HH:mm:ss");
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Compra WHERE nomesdev= '"+ esdeveniment +"' && datainici = '"+ data_inici_sql + "' && datafi = '"+ data_fi_sql+ "';";
	MySqlDataReader^ dataReader = con->executar(sql);
	List<PassarelaCompra^>^ vt = gcnew List<PassarelaCompra^>();
	while (dataReader->Read()) {
		// Agafarem les columnes per índex, la primera és la 0
		System::String^ correu = dataReader->GetString(0);
		System::String^ nom = dataReader->GetString(1);
		System::String^ dataini = dataReader->GetString(2);
		System::String^ datafi = dataReader->GetString(3);
		System::String^ preu = dataReader->GetString(4);
		vt->Add(gcnew PassarelaCompra (correu, nom, dataini, datafi, preu));
	}
	con->tancarConnexio();
	return vt;
}
List<PassarelaCompra^>^ CercadoraCompra::CercaPerCiutada(System::String^ ciutada) {
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Compra WHERE correuciutada = '" + ciutada +"'";
	MySqlDataReader^ dataReader = con->executar(sql);
	List<PassarelaCompra^>^ vt = gcnew List<PassarelaCompra^>();
	while (dataReader->Read()) {
		System::String^ correu = dataReader->GetString(0);
		System::String^ nom = dataReader->GetString(1);
		System::String^ dataini = dataReader->GetString(2);
		System::String^ datafi = dataReader->GetString(3);
		System::String^ preu = dataReader->GetString(4);
		vt->Add(gcnew PassarelaCompra(correu, nom, dataini, datafi, preu));
	}
	con->tancarConnexio();
	return vt;
}

PassarelaCompra^ CercadoraCompra::CercaCompra(System::String^ Ciutada, System::String^ esdeveniment, System::String^ inici, System::String^ fi) {
	DateTime iniciDateTime = DateTime::Parse(inici);
	DateTime fiDateTime = DateTime::Parse(fi);

	System::String^ data_inici_sql = iniciDateTime.ToString("yyyy-MM-dd HH:mm:ss");
	System::String^ data_fi_sql = fiDateTime.ToString("yyyy-MM-dd HH:mm:ss");

	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Compra WHERE correuciutada = '" + Ciutada + "'&& nomesdev = '" + esdeveniment + "' && datainici ='" + data_inici_sql + "' && datafi = '" + data_fi_sql + "';";
	MySqlDataReader^ dataReader = con->executar(sql);
	if (dataReader->Read()) {
		System::String^ correuCiu = dataReader->GetString(0);
		System::String^ esdeve = dataReader->GetString(1);
		System::String^ dataini = dataReader->GetString(2);
		System::String^ datafi = dataReader->GetString(3);
		System::String^ preu = "0";
		if (!dataReader->IsDBNull(4)) {
			preu = dataReader->GetString(4);
		}
		con->tancarConnexio();
		return gcnew PassarelaCompra(correuCiu, esdeve, dataini, datafi, preu);
	}
	else {
		throw std::runtime_error("La compra no existeix");
	}
}



bool CercadoraCompra::existeix(System::String^ Ciutada, System::String^ esdeveniment, System::String^ inici, System::String^ fi) {
	DateTime iniciDateTime = DateTime::Parse(inici);
	DateTime fiDateTime = DateTime::Parse(fi);
	System::String^ data_inici_sql = iniciDateTime.ToString("yyyy-MM-dd HH:mm:ss");
	System::String^ data_fi_sql = fiDateTime.ToString("yyyy-MM-dd HH:mm:ss");
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Compra WHERE correuciutada = '" + Ciutada + "'&& nomesdev = '" + esdeveniment + "' && datainici ='" + data_inici_sql + "' && datafi = '" + data_fi_sql + "';";
	MySqlDataReader^ dataReader = con->executar(sql);
	bool sol = false;
	if (dataReader->Read()) {
		sol = true;
	}
	con->tancarConnexio();
	return sol;
}