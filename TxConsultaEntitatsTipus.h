#pragma once
#include<string>
#include<iostream>
#include <list> 
#include "CercadoraEntitat.h"
#include "CercadoraUsuari.h"

using namespace std;
using namespace System;
using namespace System::Collections::Generic;
ref class TxConsultaEntitatsTipus
{
	private:
		List<List<System::String^>^>^ _llistaEntitats = gcnew List<List<System::String^>^>();
		System::String^ _tipus;
	public:
		TxConsultaEntitatsTipus(System::String^ tipus);
		void executar();
		List<List<System::String^>^>^ ObteResultat();
};

