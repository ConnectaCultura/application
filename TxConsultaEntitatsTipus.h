#pragma once
#include<string>
#include<iostream>
#include <list> // List
#include <Windows.h> // MessageBox
#include "CercadoraEntitat.h"
using namespace std;
using namespace System;
using namespace System::Collections::Generic;
ref class TxConsultaEntitatsTipus
{
	private:
		System::String^ _ajuntamentPrincipal;
		List<PassarelaEntitat^>^ _llistaEntitats;
		System::String^ _tipus;
	public:
		TxConsultaEntitatsTipus();
		void executar();
		void SetTipus(System::String^ tipus);
		List<PassarelaEntitat^>^ ObteResultat();
		//List<System::String^>^ ObteTotsTipus();
};

