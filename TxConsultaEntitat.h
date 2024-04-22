#pragma once
#include "CercadoraUsuari.h"
#include "CercadoraEntitat.h"
ref class TxConsultaEntitat
{
public:
	TxConsultaEntitat(System::String^ correu); 
	array<System::String^>^ ObteResultat();
	void executar();
private:
	array<System::String^>^ res;
	System::String^ _correu;

};

