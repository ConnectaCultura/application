#include "pch.h"
#include "PassarelaEntitat.h"
using namespace MySql::Data::MySqlClient;

PassarelaEntitat::PassarelaEntitat(System::String^ cE, System::String^ des, System::String^ t) {
	_correuElectronic = cE;
	_descripcio = des;
	_tipus = t;
}




void PassarelaEntitat::insereix() {
	System::String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep09; password = \"aejeeY7es9Th-\";database = amep09; ";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	System::String^ sql = "INSERT INTO Entitat VALUES ('" + _correuElectronic + "' , '" + _descripcio + "','" + _tipus + "')";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;
	// obrim la connexió
	conn->Open();
	// executem la comanda creada abans del try
	dataReader = cmd->ExecuteReader();
	conn->Close();
}

void PassarelaEntitat::esborra() {
	System::String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep09; password = \"aejeeY7es9Th-\";database = amep09; ";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	System::String^ sql = "DELETE FROM Entitat WHERE correu_electronic='" + _correuElectronic + "';";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;
	// obrim la connexió
	conn->Open();
	// executem la comanda creada abans del try
	dataReader = cmd->ExecuteReader();
	conn->Close();
}