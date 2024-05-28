#pragma once

#include "Sessio.h"
#include "PassarelaValoracio.h"
#include "CercadoraValoracio.h"
#include <stdexcept>

ref class TxValorarEsdeveniment
{
public:
	TxValorarEsdeveniment(System::String^ correuCiu, System::String^ nomEsdev, System::String^ dataIni, System::String^ dataFi, int puntuacio, System::String^ opinio);
	void executar();
	List<System::String^>^ obteResultat();

private:
	System::String^ _correuCiu;
	System::String^ _nomEsdev;
	System::String^ _dataIni;
	System::String^ _dataFi;
	int _puntuacio;
	System::String^ _opinio;

	List<System::String^>^ _result;
};

