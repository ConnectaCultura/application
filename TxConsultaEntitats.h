#pragma once
#include<string>
#include<iostream>
#include <list> 
#include "CercadoraEntitat.h"
#include "CercadoraUsuari.h"

using namespace std;
using namespace System;
using namespace System::Collections::Generic;
ref class TxConsultaEntitats
{
	private:
		System::String^ _ajuntamentPrincipal;
		List<List<System::String^>^>^ _llistaEntitats = gcnew List<List<System::String^>^>();
	public:
		TxConsultaEntitats();
		void executar();
		List<List<System::String^>^>^ ObteResultat();
};

