#pragma once
#include <list>
#include "CercadoraEsdeveniment.h"
using namespace System;
using namespace System::Collections::Generic;


ref class TxConsultaEsdeveniments
{
public:
	void executar();
	List<List<System::String^>^>^ obteResultat();
private:
	List<List<System::String^>^>^ _result;
};

