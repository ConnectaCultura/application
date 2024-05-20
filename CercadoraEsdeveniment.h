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
	bool existeix(System::String^ nomEnt, System::String^ nomE, System::String^ inici, System::String^ fi);
	List<PassarelaEsdeveniment^>^ obtePerNom(System::String^ nom);
	//List<PassarelaEntitat^>^ CercaTipus(System::String^ t);
	List<PassarelaEsdeveniment^>^ obteEsdevEntitat(System::String^ correuEntitat);
	List<PassarelaEsdeveniment^>^ obteEsdevEntitatNom(System::String^ nom, System::String^ correuEntitat);
};

