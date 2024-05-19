#include "pch.h"
#include "TxCancelaCompra.h"



TxCancelaCompra::TxCancelaCompra(System::String^ correuCiutada, System::String^ nomesdev, System::String^ datainici, System::String^ datafi)
{
	_correuCiutada = correuCiutada;
	_nomesdev = nomesdev;
	_datainici = datainici;
	_datafi = datafi;
}
void TxCancelaCompra::executar() 
{
	CercadoraCiutada cu;
	PassarelaCiutada^ ciu = cu.cercaCiutada(_correuCiutada);
	CercadoraCompra cc;
	PassarelaCompra^ com = cc.CercaCompra(_correuCiutada, _nomesdev, _datainici, _datafi);
	double preuEntradaNumero = Convert::ToDouble(com->obtePreu());
	double resultadoDivision = preuEntradaNumero / 10.0;
	int resultadoFinal = Convert::ToInt32(resultadoDivision);
	ciu->setPunts(-resultadoFinal);
	ciu->modificaPunts();
	com->esborra();
}

