#include "pch.h"
#include "TxCompraEntrada.h"

TxCompraEntrada::TxCompraEntrada(System::String^ nomEsdev, System::String^ data_inici, System::String^ data_fi, System::String^ preuEntrada){
	Sessio^ s = Sessio::getInstance();
	PassarelaUsuari^ u = s->obteUsuari();
	_correuCiutada = u->obteCorreuElectronic();
	_nomEsdev = nomEsdev;
	_dataInici = data_inici;
	_dataFi = data_fi;
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
	double preuEntradaNumero = Convert::ToDouble(_preuEntrada);
	int resultadoFinal = static_cast<int>(preuEntradaNumero / 10);
	return resultadoFinal;
}