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
}

