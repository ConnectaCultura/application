#include "pch.h"
#include "CercadoraEsdeveniment.h"



PassarelaEsdeveniment^ CercadoraEsdeveniment::CercaEsdeveniment(System::String^ nom, System::String^ inici, System::String^ fi) {
	//System::String^ iniciMySQL = System::DateTime::ParseExact(inici, "dd/MM/yyyy", System::Globalization::CultureInfo::InvariantCulture).ToString("yyyy-MM-dd");

	// Convertir la fecha de fin al formato aceptado por MySQL (DD/MM/YYYY -> YYYY-MM-DD)
	//System::String^ fiMySQL = System::DateTime::ParseExact(fi, "dd/MM/yyyy", System::Globalization::CultureInfo::InvariantCulture).ToString("yyyy-MM-dd");
	//System::String^ iniciMySQL = System::DateTime::ParseExact(inici, "dd/MM/yyyy", System::Globalization::CultureInfo::InvariantCulture).ToString("yyyy-MM-dd HH:mm:ss");
	//System::Diagnostics::Debug::WriteLine(iniciMySQL);
	// Convertir la fecha de fin al formato aceptado por MySQL (DD/MM/YYYY -> YYYY-MM-DD HH:MM:SS)
	//System::String^ fiMySQL = System::DateTime::ParseExact(fi, "dd/MM/yyyy", System::Globalization::CultureInfo::InvariantCulture).ToString("yyyy-MM-dd HH:mm:ss");
	// Obtener las partes de la fecha
	System::String^ dia = inici->Substring(0, 2);
	System::String^ mes = inici->Substring(3, 2);
	System::String^ año = inici->Substring(6, 4);

	// Construir la nueva cadena con el formato deseado
	System::String^ iniciMySQL = año + "-" + mes + "-" + dia + " 00:00:00";

	System::String^ _dia = fi->Substring(0, 2);
	System::String^ _mes = fi->Substring(3, 2);
	System::String^ _año = fi->Substring(6, 4);

	// Construir la nueva cadena con el formato deseado
	System::String^ fiMySQL = _año + "-" + _mes + "-" + _dia + " 00:00:00";

	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Esdeveniment WHERE nom = '" + nom + "' && data_inici ='" + iniciMySQL + "' && data_fi = '" + fiMySQL + "'";
	MySqlDataReader^ dataReader = con->executar(sql);
	if (dataReader->Read()) {
		System::String^ nom= dataReader->GetString(0);
		System::String^ descripcio = dataReader->GetString(1);
		System::DateTime data_inici = dataReader->GetDateTime(2);
		System::DateTime data_fi = dataReader->GetDateTime(3);
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
		System::DateTime data_inici = dataReader->GetDateTime(2);
		System::DateTime data_fi = dataReader->GetDateTime(3);
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