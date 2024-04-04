#include "pch.h"
#include "TxModificaEntitat.h"


TxModificaEntitat::TxModificaEntitat(System::String^ nom, System::String^ descripcio, System::String^ tipus, PassarelaUsuari^ u) {
	_nom = nom;
	_descripcio = descripcio;
	_tipus = tipus;
	_user = u;
}
void TxModificaEntitat::executar() {
	// Modificar nom de l'usuari
	_user->modificaNom(_nom);
	_user->modifica();

	// Busquem l'entitat amb el correu del _user
	CercadoraEntitat cE;
	PassarelaEntitat^ e = cE.CercaEntitat(_user->obteCorreuElectronic());

	// Modificar descripcio i tipus
	e->modificaValors(_descripcio, _tipus);
	e->modifica();
}
