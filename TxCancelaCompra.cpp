#include "pch.h"
#include "TxCancelaCompra.h"


TxCancelaCompra::TxCancelaCompra(System::String^ contrasenya/*, PassarelaCompra compra*/)
{
	_contrasenya = contrasenya;
	//_compra = compra;
}
void TxCancelaCompra::executar() 
{
	Sessio^ s = Sessio::getInstance();
	PassarelaUsuari^ u = s->obteUsuari();

	if (_contrasenya != u->obteContrasenya())  throw std::runtime_error("La contrasenya no és correcta, la compra no s'ha cancelat.");
	//_compra.esborra();
	s->tancaSessio();
}

