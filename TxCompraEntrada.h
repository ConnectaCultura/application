#pragma once
#include "Sessio.h"
#include "PassarelaCompra.h"
#include "CercadoraCiutada.h"
#include "PassarelaCiutada.h"

ref class TxCompraEntrada
{
	public:
		TxCompraEntrada(System::String^ nomEsdev, System::String^ data, float preuEntrada);
		void executar();
		int puntsCompra();
	
	private:
		System::String^ _correuCiutada;
		System::String^ _nomEsdev;
		System::String^ _dataInici;
		System::String^ _dataFi;
		float _preuEntrada;
};