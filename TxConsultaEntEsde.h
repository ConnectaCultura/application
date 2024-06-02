#pragma once
#include "CercadoraEsdeveniment.h"

ref class TxConsultaEntEsde
{
public:
	TxConsultaEntEsde(System::String^ nomEnt, System::String^ nomE, System::String^ inici, System::String^ fi);
	void executar();
	bool obteResultat();
private:
	bool _result;
	System::String^ _nomEnt;
	System::String^ _nomE;
	System::String^ _inici;
	System::String^ _fi;
};

