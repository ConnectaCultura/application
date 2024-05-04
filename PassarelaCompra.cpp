#include "pch.h"
#include "PassarelaCompra.h"

PassarelaCompra::PassarelaCompra(System::String^ correuCiutada, System::String^ nomEsdev, System::String^ dataInici, System::String^ dataFi, float preuEntrada) {
	_correuCiutada = correuCiutada;
	_nomEsdev = nomEsdev;
	_dataInici = dataInici;
	_dataFi = dataFi;
	_preuEntrada = preuEntrada;
}

float PassarelaCompra::obtePreu() {
	return _preuEntrada;
}
System::String^ PassarelaCompra::obteNomEsdev() {
	return _nomEsdev;
}
System::String^ PassarelaCompra::obteCorreuCiutada() {
	return _correuCiutada;
}
System::String^ PassarelaCompra::obteDataInici() {
	return _dataInici;
}
System::String^ PassarelaCompra::obteDataFi() {
	return _dataFi;
}

void PassarelaCompra::insereix() {
	System::String^ sql = "INSERT INTO Compra VALUES ('" + _correuCiutada + "' , '" + _nomEsdev + "','" + _dataInici + "','" + _dataFi + "','" + _preuEntrada + "')";
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}