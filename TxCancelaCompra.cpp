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
	System::Decimal preuEntradaNumero = System::Decimal::Parse(com->obtePreu());
	System::Decimal resultadoDivision = preuEntradaNumero / 10;
	resultadoDivision = resultadoDivision.Truncate(resultadoDivision);
	int resultadoFinal = Convert::ToInt32(resultadoDivision);
	int punts= ciu->obtePunts()-resultadoFinal;
	Sessio^ s = Sessio::getInstance();
	if(punts<0 && s->obteUsuari()->obteTipus() != "entitat") throw std::runtime_error("No es pot cancelar aquesta compra.");
	ciu->setPunts(punts);
	ciu->modificaPunts();
	com->esborra();
}

