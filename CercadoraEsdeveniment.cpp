#include "pch.h"
#include "CercadoraEsdeveniment.h"

PassarelaEsdeveniment^ CercadoraEsdeveniment::CercaEsdeveniment(System::String^ nom, System::String^ inici, System::String^ fi) {
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Esdeveniment WHERE nom = '" + nom + "' AND data_inici ='" + inici + "' AND data_fi = '" + fi + "'";
	MySqlDataReader^ dataReader = con->executar(sql);
	if (dataReader->Read()) {
		System::String^ nom= dataReader->GetString(0);
		System::String^ descripcio = dataReader->GetString(1);
		System::String^ data_inici = dataReader->GetString(2);
		System::String^ data_fi = dataReader->GetString(3);
		int aforament = -1;
		if (!dataReader->IsDBNull(4)) {
			aforament = dataReader->GetInt32(4);
		}
		float preu = 0;
		if (!dataReader->IsDBNull(5)) {
			preu = dataReader->GetFloat(5);
		}
		System::String^ tipus = dataReader->GetString(6);
		System::String^ correu = dataReader->GetString(7);
		con->tancarConnexio();
		return gcnew PassarelaEsdeveniment(correu, nom, descripcio, data_inici, data_fi, aforament, preu, tipus);
	}
}

List<PassarelaEsdeveniment^>^ CercadoraEsdeveniment::obteTots() {
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Esdeveniment";
	MySqlDataReader^ dataReader = con->executar(sql);
	List<PassarelaEsdeveniment^>^ ve = gcnew List<PassarelaEsdeveniment^>();
	while (dataReader->Read()) {
		// Agafarem les columnes per �ndex, la primera �s la 0
		System::String^ nom = dataReader->GetString(0);
		System::String^ descripcio = dataReader->GetString(1);
		System::String^ data_inici = dataReader->GetString(2);
		System::String^ data_fi = dataReader->GetString(3);
		int aforament = -1;
		if (!dataReader->IsDBNull(4)) {
			aforament = dataReader->GetInt32(4);
		}
		float preu = 0;
		if (!dataReader->IsDBNull(5)) {
			preu = dataReader->GetInt32(5);
		}
		System::String^ tipus = dataReader->GetString(6);
		System::String^ correu = dataReader->GetString(7);
		ve->Add(gcnew PassarelaEsdeveniment(correu, nom, descripcio, data_inici, data_fi, aforament, preu, tipus));
	}
	con->tancarConnexio();
	return ve;
}
