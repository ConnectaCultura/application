#include "pch.h"
#include "TxCancelaCompra.h"


TxCancelaCompra::TxCancelaCompra(System::String^ contrasenya, System::String^ correuCiutada, System::String^ nomesdev, System::String^ datainici, System::String^ datafi)
{
	_contrasenya = contrasenya;
	_correuCiutada = correuCiutada;
	_nomesdev = nomesdev;
	_datainici = datainici;
	_datafi = datafi;
}
void TxCancelaCompra::executar() 
{
	Sessio^ s = Sessio::getInstance();
	PassarelaUsuari^ u = s->obteUsuari();

	if (_contrasenya != u->obteContrasenya())  throw std::runtime_error("La contrasenya no és correcta, la compra no s'ha cancelat.");
	CercadoraCiutada cu;
	PassarelaCiutada^ ciu = cu.cercaCiutada(_correuCiutada);
	CercadoraCompra cc;
	PassarelaCompra^ com = cc.CercaCompra(_correuCiutada, _nomesdev, _datainici, _datafi);
	int punts = Convert::ToInt32(com->obtePreu()/10.0);
	ciu->setPunts(-punts);
	ciu->modificaPunts();
	com->esborra();
	s->tancaSessio();
}

