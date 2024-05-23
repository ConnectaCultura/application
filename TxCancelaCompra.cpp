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
	int punts= ciu->obtePunts()-resultadoFinal;
	Sessio^ s = Sessio::getInstance();
	if(punts<0 && s->obteUsuari()->obteTipus() != "entitat") throw std::runtime_error("No es pot cancelar aquesta compra.");
	ciu->setPunts(-resultadoFinal);
	ciu->modificaPunts();
	com->esborra();
}

