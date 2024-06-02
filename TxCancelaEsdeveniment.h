#pragma once
#include "Sessio.h"
#include "PassarelaEsdeveniment.h"
#include "PassarelaCompra.h"
#include "CercadoraCompra.h"
#include "CercadoraEsdeveniment.h"
#include "TxCancelaCompra.h"
#include <stdexcept>

ref class TxCancelaEsdeveniment
{
	private:
		System::String^ nom_esdev;
		System::String^ data_ini;
		System::String^ data_fi;

	public:
		TxCancelaEsdeveniment(System::String^ nom_esdev, System::String^ data_ini, System::String^ data_fi);
		void executar();
};

