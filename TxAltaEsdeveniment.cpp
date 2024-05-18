#include "pch.h"
#include "TxAltaEsdeveniment.h"

TxAltaEsdeveniment::TxAltaEsdeveniment(System::String^ n, System::String^ des, System::DateTime data_ini, System::DateTime data_f, int afor, float p, System::String^ tipus) {
	nom = n;
	descripcio = des;
	data_inici = data_ini;
	data_fi = data_f;
	aforament = afor;
	preu = p;
	this->tipus = tipus;
}

void TxAltaEsdeveniment::executar() {
	Sessio ^e = Sessio::getInstance();
	System::String^ cE = e->obteUsuari()->obteCorreuElectronic();
	PassarelaEsdeveniment esdev(cE, nom, descripcio, data_inici, data_fi, aforament, preu, tipus);
	esdev.insereix();
}