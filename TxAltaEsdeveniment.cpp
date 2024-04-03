#include "pch.h"
#include "TxAltaEsdeveniment.h"

TxAltaEsdeveniment::TxAltaEsdeveniment(System::String^ cE, System::String^ n, System::String^ des, System::String^ data_ini, System::String^ data_f, int afor, float p, System::String^ t) {
	correu_entitat = cE;
	nom = n;
	descripcio = des;
	data_inici = data_ini;
	data_fi = data_f;
	aforament = afor;
	preu = p;
	tipus = t;
}

void TxAltaEsdeveniment::executar() {
	Sessio ^e = Sessio::getInstance();
	System::String^ cE = e->obteUsuari()->obteCorreu();
	PassarelaEsdeveniment esdev(cE, nom, descripcio, data_inici, data_fi, aforament, preu, tipus);
	esdev.insereix();
}