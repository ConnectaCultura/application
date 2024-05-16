#include "pch.h"
#include "TxCancelaEsdeveniment.h"

TxCancelaEsdeveniment::TxCancelaEsdeveniment(System::String^ nom_esdev, System::String^ data_ini, System::String^ data_fi) {
	this->nom_esdev = nom_esdev;
	this->data_ini = data_ini;
	this->data_fi = data_fi;
}

void TxCancelaEsdeveniment::executar() {
	CercadoraCompra cerca;
	List<PassarelaCompra^>^ compres = cerca.CercaPerEsdeveniment(nom_esdev);
	for (unsigned int i = 0; i < compres->Count; ++i) {
		TxCancelaCompra tx_CC(compres[i]->obteCorreuCiutada(), nom_esdev, data_ini, data_fi);
		tx_CC.executar();
	}
	PassarelaEsdeveniment esborrar("x", nom_esdev, "x", data_ini, data_fi, 0, 0, "x");
	esborrar.esborra();
}
