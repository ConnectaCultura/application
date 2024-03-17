#include "pch.h"
#include "PassarelaUsuari.h"

using namespace MySql::Data::MySqlClient;

PassarelaUsuari::PassarelaUsuari(System::String^ nom, System::String^ ceU, System::String^ cU, System::String^ t) {
	_nom = nom;
	_correuElectronic = ceU;
	_contrasenya = cU;
	_tipus = t;
}

void PassarelaUsuari::insereix() {
	System::String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep09; password = \"aejeeY7es9Th-\";database = amep09; ";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	System::String^ sql = "INSERT INTO Usuari VALUES ('" + _nom + "' , '" + _contrasenya + "','" + _tipus + "','" + _correuElectronic + "')";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;

	// obrim la connexió
	conn->Open();
	// executem la comanda creada abans del try
	dataReader = cmd->ExecuteReader();

	// si tot va bé es tanca la connexió
	conn->Close();
}
