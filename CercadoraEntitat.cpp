#include "pch.h"
#include "CercadoraEntitat.h"

PassarelaEntitat^ CercadoraEntitat::CercaEntitat(System::String^ correu) {
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Entitat WHERE correu_electronic = '" + correu + "'";
	MySqlDataReader^ dataReader = con->executar(sql);
	if (dataReader->Read()) {
		System::String^ correu_el = dataReader->GetString(0);
		System::String^ descripcio = dataReader->GetString(1);
		System::String^ tipus = dataReader->GetString(2);
		System::String^ ajuntament = dataReader->GetString(3);
		con->tancarConnexio();
		return gcnew PassarelaEntitat(correu_el, descripcio, tipus, ajuntament);
	}
	else {
		throw std::runtime_error("L'Entitat no existeix");
	}

}

List<PassarelaEntitat^>^ CercadoraEntitat::ObteTots()
{
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Entitat";
	MySqlDataReader^ dataReader = con->executar(sql);
	List<PassarelaEntitat^>^ ve = gcnew List<PassarelaEntitat^>();
	while (dataReader->Read()) {
		// Agafarem les columnes per �ndex, la primera �s la 0
		System::String^ correu_electronic = dataReader->GetString(0);
		System::String^ descripcio = dataReader->GetString(1);
		System::String^ tipus = dataReader->GetString(2);
		System::String^ ajuntament = dataReader->GetString(3);
		ve->Add(gcnew PassarelaEntitat(correu_electronic, descripcio, tipus, ajuntament));
	}
	con->tancarConnexio();
	return ve;
}


List<PassarelaEntitat^>^ CercadoraEntitat::CercaTipus(System::String^ t)
{
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Entitat WHERE modalitat = '" + t + "';";
	MySqlDataReader^ dataReader = con->executar(sql);
	List<PassarelaEntitat^>^ ve = gcnew List<PassarelaEntitat^>();
	while (dataReader->Read()) {
		// Agafarem les columnes per �ndex, la primera �s la 0
		System::String^ correu_electronic = dataReader->GetString(0);
		System::String^ descripcio = dataReader->GetString(1);
		System::String^ tipus = dataReader->GetString(2);
		System::String^ ajuntament = dataReader->GetString(3);
		ve->Add(gcnew PassarelaEntitat(correu_electronic, descripcio, tipus, ajuntament));
	}

	// si tot va b� es tanca la connexi�
	con->tancarConnexio();
	return ve;
}

List<PassarelaEntitat^>^ CercadoraEntitat::CercaAjuntament(System::String^ a)
{
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Entitat WHERE ajuntament = '" + a + "';";
	MySqlDataReader^ dataReader = con->executar(sql);
	List<PassarelaEntitat^>^ ve = gcnew List<PassarelaEntitat^>();
	while (dataReader->Read()) {
		// Agafarem les columnes per �ndex, la primera �s la 0
		System::String^ correu_electronic = dataReader->GetString(0);
		System::String^ descripcio = dataReader->GetString(1);
		System::String^ tipus = dataReader->GetString(2);
		System::String^ ajuntament = dataReader->GetString(3);
		ve->Add(gcnew PassarelaEntitat(correu_electronic, descripcio, tipus, ajuntament));
	}

	// si tot va b� es tanca la connexi�
	con->tancarConnexio();
	return ve;
}

List<PassarelaEntitat^>^ CercadoraEntitat::CercaTipusAjuntament(System::String^ t, System::String^ a)
{
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Entitat WHERE modalitat = '" + t +"' && ajuntament = '" + a + "';";
	MySqlDataReader^ dataReader = con->executar(sql);
	List<PassarelaEntitat^>^ ve = gcnew List<PassarelaEntitat^>();
	while (dataReader->Read()) {
		// Agafarem les columnes per �ndex, la primera �s la 0
		System::String^ correu_electronic = dataReader->GetString(0);
		System::String^ descripcio = dataReader->GetString(1);
		System::String^ tipus = dataReader->GetString(2);
		System::String^ ajuntament = dataReader->GetString(3);
		ve->Add(gcnew PassarelaEntitat(correu_electronic, descripcio, tipus, ajuntament));
	}

	// si tot va b� es tanca la connexi�
	con->tancarConnexio();
	return ve;
}
