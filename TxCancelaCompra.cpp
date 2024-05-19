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

}

