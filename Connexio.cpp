#include "pch.h"
#include "Connexio.h"

MySqlDataReader^ Connexio::executar(System::String^ sql) {
	// Obro i llegeixo
	conn = gcnew MySqlConnection("datasource=ubiwan.epsevg.upc.edu; username = amep09; password = \"aejeeY7es9Th-\";database = amep09; ");
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;
	conn->Open();
	dataReader = cmd->ExecuteReader();
	return dataReader;
}

void Connexio::tancarConnexio() {
	conn->Close();
}