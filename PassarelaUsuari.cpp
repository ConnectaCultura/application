#include "pch.h"
#include "PassarelaUsuari.h"

using namespace MySql::Data::MySqlClient;

PassarelaUsuari::PassarelaUsuari(System::String^ nom, System::String^ ceU, System::String^ cU, System::String^ t) {
	_nom = nom;
	_correuElectronic = ceU;
	_contrasenya = cU;
	_tipus = t;
}

System::String^ PassarelaUsuari::obteContrasenya()
{
	return _contrasenya;
}

void PassarelaUsuari::insereix() {
	System::String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep09; password = \"aejeeY7es9Th-\";database = amep09; ";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	System::String^ sql = "INSERT INTO Usuari VALUES ('" + _nom + "' , '" + _contrasenya + "','" + _tipus + "','" + _correuElectronic + "')";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;

	// obrim la connexi�
	conn->Open();
	// executem la comanda creada abans del try
	dataReader = cmd->ExecuteReader();

	// si tot va b� es tanca la connexi�
	conn->Close();
}

void PassarelaUsuari::esborra() {
	System::String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep09; password = \"aejeeY7es9Th-\";database = amep09; ";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	System::String^ sql = "DELETE FROM Usuari WHERE correu_electronic='" + _correuElectronic + "';"; 
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;

	// obrim la connexi�
	conn->Open();
	// executem la comanda creada abans del try
	dataReader = cmd->ExecuteReader();

	// si tot va b� es tanca la connexi�
	conn->Close();
}
