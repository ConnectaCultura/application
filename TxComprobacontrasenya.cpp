#include "pch.h"
#include "TxComprobacontrasenya.h"

TxComprobacontrasenya::TxComprobacontrasenya(System::String^ contrasenya) {
	_contrasenya = contrasenya;
}

void TxComprobacontrasenya::executar() {
	Sessio^ s = Sessio::getInstance();
	PassarelaUsuari^ u = s->obteUsuari();

	if (_contrasenya != u->obteContrasenya())  throw std::runtime_error("La contrasenya no és correcta, la compra no s'ha cancelat.");
}
