#pragma once
#include <list>
#include "CercadoraCompra.h"
#include "PassarelaCompra.h"

using namespace System;
using namespace System::Collections::Generic;

ref class TxConsultaCompra
{
	public:
		TxConsultaCompra(System::String^ correuCiu, System::String^ nomEsdev, System::String^ dataIni, System::String^ dataFi);
		void executar();
		List<System::String^>^ obteResultat();

	private:
		System::String^ _correuCiu;
		System::String^ _nomEsdev;
		System::String^ _dataIni;
		System::String^ _dataFi;
		bool _antic;

		List<System::String^>^ _result;
};

