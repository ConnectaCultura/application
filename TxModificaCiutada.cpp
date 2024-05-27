#include "pch.h"
#include "TxModificaCiutada.h"

TxModificaCiutada::TxModificaCiutada(System::String^ nom, PassarelaUsuari^ u) {
	_nom = nom;
	_user = u;
}
void TxModificaCiutada::executar() {
	// Modificar nom del ciutada
	_user->modificaNom(_nom);
	_user->modifica();

	// Busquem el ciutada amb el correu del _user
	CercadoraUsuari cU;
	PassarelaUsuari^ c = cU.cercaUsuari(_user->obteCorreuElectronic());

	// Modificar descripcio i tipus
	c->modificaNom(_nom);
	c->modifica();
}

