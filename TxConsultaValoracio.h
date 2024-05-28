#pragma once

#include "Sessio.h"
#include "PassarelaValoracio.h"
#include "CercadoraValoracio.h"
#include <stdexcept>

ref class TxConsultaValoracio
{
public:
	TxConsultaValoracio() {};
	TxConsultaValoracio(System::String^ correuCiu, System::String^ nomEsdev, System::String^ dataIni, System::String^ dataFi);
	void executar();
	List<System::String^>^ obteResultat();

private:
	System::String^ _correuCiu;
	System::String^ _nomEsdev;
	System::String^ _dataIni;
	System::String^ _dataFi;

	List<System::String^>^ _result;
};

