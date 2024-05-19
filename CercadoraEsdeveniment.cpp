#include "pch.h"
#include "CercadoraEsdeveniment.h"



PassarelaEsdeveniment^ CercadoraEsdeveniment::CercaEsdeveniment(System::String^ nom, System::String^ inici, System::String^ fi) {
	DateTime iniciDateTime = DateTime::Parse(inici);
	DateTime fiDateTime = DateTime::Parse(fi);
	System::String^ data_inici_sql = iniciDateTime.ToString("yyyy-MM-dd HH:mm:ss");
	System::String^ data_fi_sql = fiDateTime.ToString("yyyy-MM-dd HH:mm:ss");
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Esdeveniment WHERE nom = '" + nom + "' && data_inici ='" + data_inici_sql + "' && data_fi = '" + data_fi_sql + "'";
	MySqlDataReader^ dataReader = con->executar(sql);
	if (dataReader->Read()) {
		System::String^ nom= dataReader->GetString(0);
		System::String^ descripcio = dataReader->GetString(1);
		System::DateTime data_inici = dataReader->GetDateTime(2);
		System::DateTime data_fi = dataReader->GetDateTime(3);
		int^ aforament = nullptr;
		if (!dataReader->IsDBNull(4)) {
			aforament = dataReader->GetInt32(4);
		}
		System::String^ preu = nullptr;
		if (!dataReader->IsDBNull(5)) {
			preu = dataReader->GetString(5);
		}
		System::String^ tipus = dataReader->GetString(6);
		System::String^ correu = dataReader->GetString(7);
		con->tancarConnexio();
		return gcnew PassarelaEsdeveniment(correu, nom, descripcio, data_inici, data_fi, aforament, preu, tipus);
	}
}

List<PassarelaEsdeveniment^>^ CercadoraEsdeveniment::obteTots() {
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Esdeveniment ORDER BY data_inici ASC";
	MySqlDataReader^ dataReader = con->executar(sql);
	List<PassarelaEsdeveniment^>^ ve = gcnew List<PassarelaEsdeveniment^>();
	while (dataReader->Read()) {
		System::String^ nom = dataReader->GetString(0);
		System::String^ descripcio = "";
		if (!dataReader->IsDBNull(1)){
			descripcio = dataReader->GetString(1);
		}
		System::DateTime data_inici = dataReader->GetDateTime(2);
		System::DateTime data_fi = dataReader->GetDateTime(3);
		int^ aforament = nullptr;
		if (!dataReader->IsDBNull(4)) {
			aforament = dataReader->GetInt32(4);
		}
		System::String^ preu = nullptr;
		if (!dataReader->IsDBNull(5)) {
			preu = dataReader->GetString(5);
		}
		System::String^ tipus = dataReader->GetString(6);
		System::String^ correu = dataReader->GetString(7);
		ve->Add(gcnew PassarelaEsdeveniment(correu, nom, descripcio, data_inici, data_fi, aforament, preu, tipus));
	}
	con->tancarConnexio();
	return ve;
}
List<PassarelaEsdeveniment^>^ CercadoraEsdeveniment::obteEsdevEntitat(System::String^ correuEntitat) {
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Esdeveniment WHERE correu_entitat ='" + correuEntitat +"';";
	MySqlDataReader^ dataReader = con->executar(sql);
	List<PassarelaEsdeveniment^>^ ve = gcnew List<PassarelaEsdeveniment^>();
	while (dataReader->Read()) {
		// Agafarem les columnes per �ndex, la primera �s la 0
		System::String^ nom = dataReader->GetString(0);
		System::String^ descripcio = dataReader->GetString(1);
		System::DateTime data_inici = dataReader->GetDateTime(2);
		System::DateTime data_fi = dataReader->GetDateTime(3);
		int^ aforament = nullptr;
		if (!dataReader->IsDBNull(4)) {
			aforament = dataReader->GetInt32(4);
		}
		System::String^ preu = nullptr;
		if (!dataReader->IsDBNull(5)) {
			preu = dataReader->GetString(5);
		}
		System::String^ tipus = dataReader->GetString(6);
		System::String^ correu = dataReader->GetString(7);
		ve->Add(gcnew PassarelaEsdeveniment(correu, nom, descripcio, data_inici, data_fi, aforament, preu, tipus));
	}
	con->tancarConnexio();
	return ve;
}

List<PassarelaEsdeveniment^>^ CercadoraEsdeveniment::obtePerNom(System::String^ nom) {
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Esdeveniment WHERE nom = '" + nom + "'ORDER BY data_inici ASC";
	MySqlDataReader^ dataReader = con->executar(sql);
	List<PassarelaEsdeveniment^>^ ve = gcnew List<PassarelaEsdeveniment^>();
	while (dataReader->Read()) {
		System::String^ nom = dataReader->GetString(0);
		System::String^ descripcio = dataReader->GetString(1);
		System::DateTime data_inici = dataReader->GetDateTime(2);
		System::DateTime data_fi = dataReader->GetDateTime(3);
		int^ aforament = nullptr;
		if (!dataReader->IsDBNull(4)) {
			aforament = dataReader->GetInt32(4);
		}
		System::String^ preu = nullptr;
		if (!dataReader->IsDBNull(5)) {
			preu = dataReader->GetString(5);
		}
		System::String^ tipus = dataReader->GetString(6);
		System::String^ correu = dataReader->GetString(7);
		ve->Add(gcnew PassarelaEsdeveniment(correu, nom, descripcio, data_inici, data_fi, aforament, preu, tipus));
	}
	con->tancarConnexio();
	return ve;
}

bool CercadoraEsdeveniment::existeix(System::String^ nomEnt, System::String^ nomE, System::String^ inici, System::String^ fi) {
	Connexio^ con = Connexio::getInstance();
	DateTime iniciDateTime = DateTime::Parse(inici);
	DateTime fiDateTime = DateTime::Parse(fi);
	System::String^ data_inici_sql = iniciDateTime.ToString("yyyy-MM-dd HH:mm:ss");
	System::String^ data_fi_sql = fiDateTime.ToString("yyyy-MM-dd HH:mm:ss");
	System::String^ sql = "SELECT * FROM Esdeveniment WHERE nom = '" + nomE + "'&& data_inici = '"+ data_inici_sql +"' && data_fi = '"+ data_fi_sql +"'&& correu_entitat = '"+ nomEnt+"'";
	MySqlDataReader^ dataReader = con->executar(sql);
	bool sol= false;
	if (dataReader->Read()) {
		sol = true;
	}
	con->tancarConnexio();
	return sol;
}
