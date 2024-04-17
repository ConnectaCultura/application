#include "pch.h"
#include "CercadoraEntitat.h"

PassarelaEntitat^ CercadoraEntitat::CercaEntitat(System::String^ correu) {
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Entitat WHERE correu_electronic = '" + correu + "'";
	MySqlDataReader^ dataReader = con->executar(sql);
	if (dataReader->Read()) {
		System::String^ correu_el = dataReader->GetString(0);
		System::String^ descripcio = dataReader->GetString(1);
		System::String^ modalitat = dataReader->GetString(2);
		con->tancarConnexio();
		return gcnew PassarelaEntitat(correu_el, descripcio, modalitat);
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
		System::String^ modalitat = dataReader->GetString(2);
		ve->Add(gcnew PassarelaEntitat(correu_electronic, descripcio, modalitat));
	}
	con->tancarConnexio();
	return ve;
}


List<PassarelaEntitat^>^ CercadoraEntitat::CercaModalitat(System::String^ t)
{
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Entitat WHERE modalitat = '" + t + "';";
	MySqlDataReader^ dataReader = con->executar(sql);
	List<PassarelaEntitat^>^ ve = gcnew List<PassarelaEntitat^>();
	while (dataReader->Read()) {
		// Agafarem les columnes per �ndex, la primera �s la 0
		System::String^ correu_electronic = dataReader->GetString(0);
		System::String^ descripcio = dataReader->GetString(1);
		System::String^ modalitat = dataReader->GetString(2);
		ve->Add(gcnew PassarelaEntitat(correu_electronic, descripcio, modalitat));
	}

	// si tot va b� es tanca la connexi�
	con->tancarConnexio();
	return ve;
}
