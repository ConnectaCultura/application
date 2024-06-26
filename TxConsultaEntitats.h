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
		System::String^ _tipus;
		System::String^ _ajuntament;
		System::String^ _nom;
		List<List<System::String^>^>^ _llistaEntitats = gcnew List<List<System::String^>^>();
	public:
		TxConsultaEntitats(System::String^ tipus, System::String^ ajuntament, System::String^ nom);
		void executar();
		List<List<System::String^>^>^ ObteResultat();
};

