#pragma once
#include "Sessio.h"
#include "PassarelaCompra.h"
#include "CercadoraCiutada.h"
#include "PassarelaCiutada.h"

ref class TxCompraEntrada
{
public:
	TxCompraEntrada(System::String^ nomEsdev, System::String^ data_inici, System::String^ data_fi, System::String^ preuEntrada);
	void executar();
	int puntsCompra();

private:
	System::String^ _correuCiutada;
	System::String^ _nomEsdev;
	System::String^ _dataInici;
	System::String^ _dataFi;
	System::String^ _preuEntrada;
};