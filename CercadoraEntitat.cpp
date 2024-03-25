#include "pch.h"
#include "CercadoraEntitat.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace MySql::Data::MySqlClient;
using namespace System::Windows::Forms;

PassarelaEntitat^ CercadoraEntitat::CercaEntitat(System::String^ cE) 
{
	System::String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep09; password = \"aejeeY7es9Th-\";database = amep09; ";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	System::String^ sql = "SELECT * FROM Entitat WHERE correu_electronic = '" + cE + "'"; //;
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;
	PassarelaEntitat^ e;

	// obrim la connexió
	conn->Open();
	// executem la comanda (cmd) que s’ha creat abans del try
	dataReader = cmd->ExecuteReader();
	if (dataReader->Read()) {
		// Agafarem les columnes per índex, la primera és la 0
		System::String^ correu_electronic = dataReader->GetString(0);
		System::String^ descripcio = dataReader->GetString(1);
		System::String^ tipus = dataReader->GetString(2);
		e = gcnew PassarelaEntitat(correu_electronic, descripcio, tipus);
	}
	// si tot va bé es tanca la connexió
	conn->Close();
	return e;
}

List<PassarelaEntitat^>^ CercadoraEntitat::ObteTots()
{
	System::String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep09; password = \"aejeeY7es9Th-\";database = amep09; ";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	System::String^ sql = "SELECT * FROM Entitat";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;
	List<PassarelaEntitat^>^ ve = gcnew List<PassarelaEntitat^>();
	
	// obrim la connexió
	conn->Open();
	// executem la comanda (cmd) que s’ha creat abans del try
	dataReader = cmd->ExecuteReader();
	while (dataReader->Read()) {
		// Agafarem les columnes per índex, la primera és la 0
		System::String^ correu_electronic = dataReader->GetString(0);
		System::String^ descripcio = dataReader->GetString(1);
		System::String^ tipus = dataReader->GetString(2);
		ve->Add(gcnew PassarelaEntitat(correu_electronic, descripcio, tipus));
	}
	
	// si tot va bé es tanca la connexió
	conn->Close();
	return ve;
}


List<PassarelaEntitat^>^ CercadoraEntitat::CercaTipus(System::String^ t)
{
	System::String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep09; password = \"aejeeY7es9Th-\";database = amep09; ";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	System::String^ sql = "SELECT * FROM Entitat WHERE tipus = '" + t + "';";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;
	List<PassarelaEntitat^>^ ve = gcnew List<PassarelaEntitat^>();

	// obrim la connexió
	conn->Open();
	// executem la comanda (cmd) que s’ha creat abans del try
	dataReader = cmd->ExecuteReader();
	while (dataReader->Read()) {
		// Agafarem les columnes per índex, la primera és la 0
		System::String^ correu_electronic = dataReader->GetString(0);
		System::String^ descripcio = dataReader->GetString(1);
		System::String^ tipus = dataReader->GetString(2);
		ve->Add(gcnew PassarelaEntitat(correu_electronic, descripcio, tipus));
	}

	// si tot va bé es tanca la connexió
	conn->Close();
	
	return ve;
}