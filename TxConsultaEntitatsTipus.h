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
		System::String^ _ajuntamentPrincipal;
		List<List<System::String^>^>^ _llistaEntitats = gcnew List<List<System::String^>^>();
		System::String^ _modalitat;
	public:
		TxConsultaEntitatsTipus();
		void executar();
		void SetModalitat(System::String^ modalitat);
		List<List<System::String^>^>^ obteResultat();
};

