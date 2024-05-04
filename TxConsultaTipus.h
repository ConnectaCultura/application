#pragma once
#include<string>
#include<iostream>
#include <list> 
#include "CercadoraTipus.h"

//using namespace std;
using namespace System;
using namespace System::Collections::Generic;
ref class TxConsultaTipus
{
	private:
		List<System::String^>^ _result;
	public:
		TxConsultaTipus();
		void executar();
		List<System::String^>^ ObteResultat();
};

