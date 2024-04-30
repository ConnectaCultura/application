#pragma once
#include<string>
#include<iostream>
#include <list> // List
#include "CercadoraEntitat.h"
#include "CercadoraUsuari.h"
using namespace std;
using namespace System;
using namespace System::Collections::Generic;
/*
struct Entitat {
	System::String^ _nom;
	System::String^ _correuElectronic;
	System::String^ _descripcio;
	System::String^ _modalitat;
	System::String^ _ajuntament;
};
*/
ref class TxConsultaEntitatsTipus
{
	private:
		System::String^ _ajuntamentPrincipal;
		List<List<System::String^>^>^ _llistaEntitats;
		System::String^ _modalitat;
	public:
		TxConsultaEntitatsTipus();
		void executar();
		void SetModalitat(System::String^ modalitat);
		List<List<System::String^>^>^ ObteResultat();
};

