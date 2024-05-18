#pragma once
#include <list>
#include "CercadoraEsdeveniment.h"
using namespace System;
using namespace System::Collections::Generic;

ref class TxConsultaEsdeveniments
{
public:
	TxConsultaEsdeveniments(System::String^ correu, bool antics, bool gratuit, bool senseEntrada);
	void executar();
	List<List<System::String^>^>^ obteResultat();
private:
	List<List<System::String^>^>^ _result;
	System::String^ _correu;
	bool _antics;
	bool _gratuit;
	bool _senseEntrada;
};

