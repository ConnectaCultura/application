#pragma once
#include<string>
#include<iostream>
#include <list> 
#include "CercadoraEntitat.h"

using namespace std;
using namespace System;
using namespace System::Collections::Generic;
ref class TxConsultaEntitats
{
	private:
		System::String^ _ajuntamentPrincipal;
		List<PassarelaEntitat^>^ _llistaEntitats;
	public:
		TxConsultaEntitats();
		void executar();
		List<PassarelaEntitat^>^ ObteResultat();
};

