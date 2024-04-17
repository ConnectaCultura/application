#pragma once
#include<string>
#include<iostream>
#include <list> // List
#include "CercadoraEntitat.h"
using namespace std;
using namespace System;
using namespace System::Collections::Generic;
ref class TxConsultaEntitatsTipus
{
	private:
		System::String^ _ajuntamentPrincipal;
		List<PassarelaEntitat^>^ _llistaEntitats;
		System::String^ _modalitat;
	public:
		TxConsultaEntitatsTipus();
		void executar();
		void SetModalitat(System::String^ modalitat);
		List<PassarelaEntitat^>^ ObteResultat();
};

