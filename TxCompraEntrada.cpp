#include "pch.h"
#include "TxCompraEntrada.h"

TxCompraEntrada::TxCompraEntrada(System::String^ correuCiutada, System::String^ nomEsdev,
								 System::String^ dataInici, System::String^ dataFi, float preuEntrada) {
	_correuCiutada = correuCiutada;
	_nomEsdev = nomEsdev;
	_dataInici = dataInici;
	_dataFi = dataFi;
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
	return(_preuEntrada / 10);
}