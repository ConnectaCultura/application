#pragma once
#include <list>
#include "CercadoraCompra.h"
using namespace System;
using namespace System::Collections::Generic;

ref class TxConsultaCompres
{
public:
	TxConsultaCompres(System::String^ correu);
	void executar();
	List<List<System::String^>^>^ obteResultat();
private:
	List<List<System::String^>^>^ _result;
	System::String^ _correu;
};

