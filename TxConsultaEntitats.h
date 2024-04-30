#pragma once
#include<string>
#include<iostream>
#include <list> 
#include "CercadoraEntitat.h"
#include "CercadoraUsuari.h"
/*
struct Entitat {
	System::String^ _nom;
	System::String^ _correuElectronic;
	System::String^ _descripcio;
	System::String^ _modalitat;
	System::String^ _ajuntament;
};
*/
using namespace std;
using namespace System;
using namespace System::Collections::Generic;
ref class TxConsultaEntitats
{
	private:
		System::String^ _ajuntamentPrincipal;
		List<List<System::String^>^>^ _llistaEntitats;
	public:
		TxConsultaEntitats();
		void executar();
		List<List<System::String^>^>^ obteResultat();
};

