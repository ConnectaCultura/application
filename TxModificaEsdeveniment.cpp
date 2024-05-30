#include "pch.h"
#include "TxModificaEsdeveniment.h"

TxModificaEsdeveniment::TxModificaEsdeveniment(System::String^ nom, System::String^ inici, System::String^ fi, System::String^ preu, System::String^ descripcio, System::String^ tipus) {
	_nom = nom;
	_inici = inici;
	_fi = fi;
	_preu = preu;
	_descripcio = descripcio;
	_tipus = tipus;
}
void TxModificaEsdeveniment::executar() {
	CercadoraEsdeveniment c;
	PassarelaEsdeveniment^ p = c.CercaEsdeveniment(_nom, _inici, _fi);
	p->setPreu(_preu);
	p->setDescripcio(_descripcio);
	p->setTipus(_tipus);
	p->modifica();
}