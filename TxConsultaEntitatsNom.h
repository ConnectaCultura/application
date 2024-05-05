#pragma once
#include<string>
#include<iostream>
#include <list> 
#include "CercadoraEntitat.h"
#include "CercadoraUsuari.h"


using namespace std;
using namespace System;
using namespace System::Collections::Generic;
ref class TxConsultaEntitatsNom
{
private:
	List<System::String^>^ _entitats;
	List<System::String^>^ _res;
public:
	TxConsultaEntitatsNom(List<System::String^>^ ve);
	void executar();
	List<System::String^>^ obteResultat();

};

