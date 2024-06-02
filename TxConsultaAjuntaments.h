#pragma once
#include<string>
#include<iostream>
#include <list> 
#include "CercadoraAjuntament.h"
#include "CercadoraUsuari.h"
#include "PassarelaAjuntament.h"

using namespace std;
using namespace System;
using namespace System::Collections::Generic;

ref class TxConsultaAjuntaments
{
	private:
		List<List<System::String^>^>^ _llistaAjuntaments = gcnew List<List<System::String^>^>();
		System::String^ _ajuntament;

	public:
		TxConsultaAjuntaments(System::String^ ajuntament);
		void executar();
		List<List<System::String^>^>^ ObteResultat();
};

