#pragma once
#include "PassarelaEsdeveniment.h"
#include "Connexio.h"
#include <list>
using namespace System;
using namespace System::Collections::Generic;
ref class CercadoraEsdeveniment
{
public:
	CercadoraEsdeveniment() {}
	PassarelaEsdeveniment^ CercaEsdeveniment(System::String^ nom, System::String^ inici, System::String^ fi);
	List<PassarelaEsdeveniment^>^ obteTots();
	//List<PassarelaEntitat^>^ CercaTipus(System::String^ t);
};

