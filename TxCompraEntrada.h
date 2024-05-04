#pragma once
#include "PassarelaCompra.h"

ref class TxCompraEntrada
{
	public:
		TxCompraEntrada(System::String^ correuCiutada, System::String^ nomEsdev, System::String^ dataInici, System::String^ dataFi, float preuEntrada);
		void executar();
		void puntsCompra();
	
	private:
		System::String^ _correuCiutada;
		System::String^ _nomEsdev;
		System::String^ _dataInici;
		System::String^ _dataFi;
		float _preuEntrada;
};