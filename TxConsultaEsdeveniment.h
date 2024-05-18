#pragma once
#include <list>
#include "CercadoraEsdeveniment.h"
#include "CercadoraUsuari.h"
//#include "CercadoraCompra.h"
using namespace System;
using namespace System::Collections::Generic;

ref class TxConsultaEsdeveniment
{
public:
	TxConsultaEsdeveniment(String^ nom, String^ inici, String^ fi);
	void executar();
	List<System::String^>^ obteResultat();

private:
	String^ _nom;
	String^ _inici;
	String^ _fi;
	List<System::String^>^ _result;
};

