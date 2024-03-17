#include "pch.h"
#include "PassarelaCiutada.h"

using namespace MySql::Data::MySqlClient;

PassarelaCiutada::PassarelaCiutada(System::String^ cE, System::String^ aj) {
	_correuElectronic = cE;
	_ajuntament = aj;
}

void PassarelaCiutada::insereix() {
	System::String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep09; password = \"aejeeY7es9Th-\";database = amep09; ";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	System::String^ sql = "INSERT INTO Ciutada VALUES ('" + _correuElectronic + "' , '" + _ajuntament + "')";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;
	// obrim la connexió
	conn->Open();
	// executem la comanda creada abans del try
	dataReader = cmd->ExecuteReader();
	conn->Close();
}