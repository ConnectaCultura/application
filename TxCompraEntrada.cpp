#include "pch.h"
#include "TxCompraEntrada.h"

TxCompraEntrada::TxCompraEntrada(System::String^ nomEsdev,
								 System::String^ data, float preuEntrada) {
	Sessio^ s = Sessio::getInstance();
	PassarelaUsuari^ u = s->obteUsuari();
	_correuCiutada = u->obteCorreuElectronic();

	System::String^ dia = data->Substring(0, 2);
	System::String^ mes = data->Substring(3, 2);
	System::String^ año = data->Substring(6, 4);

	// Construir la nueva cadena con el formato deseado
	System::String^ iniciMySQL = año + "-" + mes + "-" + dia + " 00:00:00";

	System::String^ _dia = data->Substring(20, 2);
	System::String^ _mes = data->Substring(23, 2);
	System::String^ _año = data->Substring(26, 4);

	// Construir la nueva cadena con el formato deseado
	System::String^ fiMySQL = _año + "-" + _mes + "-" + _dia + " 00:00:00";
	_nomEsdev = nomEsdev;
	_dataInici = iniciMySQL;
	_dataFi = fiMySQL;
	_preuEntrada = preuEntrada;
}

void TxCompraEntrada::executar() {
	PassarelaCompra com(_correuCiutada, _nomEsdev, _dataInici, _dataFi, _preuEntrada);
	com.insereix();
	int punts = puntsCompra();
	CercadoraCiutada ciu;
	PassarelaCiutada^ pas = ciu.cercaCiutada(_correuCiutada);
	pas->setPunts(punts);
	pas->modificaPunts();
}

int TxCompraEntrada::puntsCompra() {
	return Convert::ToInt32(_preuEntrada/10.0);
}