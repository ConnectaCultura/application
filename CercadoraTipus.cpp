#include "pch.h"
#include "CercadoraTipus.h"

List<System::String^>^ CercadoraTipus::ObteTots() 
{
	System::String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep09; password = \"aejeeY7es9Th-\";database = amep09; ";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	System::String^ sql = "SELECT * FROM Modalitat";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;
	List<System::String^>^ vt = gcnew List<System::String^>();
	vt->Add("");

	// obrim la connexió
	conn->Open();
	// executem la comanda (cmd) que s’ha creat abans del try
	dataReader = cmd->ExecuteReader();
	while (dataReader->Read()) {
		// Agafarem les columnes per índex, la primera és la 0
		System::String^ nom = dataReader->GetString(0);
		vt->Add(nom);
	}
	conn->Close();
	return vt;
}
//ho podria fer aqui el Add("") ///!!
//vt->Add("");////!!!!  vt->Add("Sense Filtre");

