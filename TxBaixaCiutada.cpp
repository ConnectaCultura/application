#include "pch.h"
#include "TxBaixaCiutada.h"

TxBaixaCiutada::TxBaixaCiutada() {
}

TxBaixaCiutada::TxBaixaCiutada(System::String^ contrasenya) {
	_contrasenya = contrasenya;
}


void TxBaixaCiutada::executar() {
	// Necessito la sessió per agafar el correu electronic de l'entitat
	Sessio^ s = Sessio::getInstance();
	PassarelaUsuari^ u = s->obteUsuari();

	System::String^ c = u->obteContrasenya();
	if (c != _contrasenya) throw std::runtime_error("La contrasenya no és correcta, l'usuari no s'ha donat de baixa.");
	u->esborra();
	s->tancaSessio();
}