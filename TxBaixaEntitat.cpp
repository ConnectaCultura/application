﻿#include "pch.h"
#include "TxBaixaEntitat.h"


TxBaixaEntitat::TxBaixaEntitat() {
}

TxBaixaEntitat::TxBaixaEntitat(System::String^ contrasenya) {
	_contrasenya = contrasenya;
}


void TxBaixaEntitat::executar() {
	// Necessito la sessió per agafar el correu electrňnic de l'entitat
	Sessio^ s = Sessio::getInstance();
	PassarelaUsuari^ u = s->obteUsuari();

	System::String^ c = u->obteContrasenya();
	if (c != _contrasenya) throw std::runtime_error("La contrasenya no és correcta, l'usuari no s'ha esborrat.");
	u->esborra();
	s->tancaSessio();
}