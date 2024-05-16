#include "pch.h"
#include "TxComprovaContrasenya.h"

TxComprovaContrasenya::TxComprovaContrasenya(System::String^ contrasenya) {
	_contrasenya = contrasenya;
}

void TxComprovaContrasenya::executar(){
	Sessio^ s = Sessio::getInstance();
	PassarelaUsuari^ u = s->obteUsuari();
	if (_contrasenya != u->obteContrasenya())  throw std::runtime_error("La contrasenya no és correcta, la compra no s'ha cancelat.");
}
