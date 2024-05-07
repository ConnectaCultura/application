#pragma once
#include "CercadoraUsuari.h"
#include "CercadoraEntitat.h"
#include <list>
ref class TxConsultaEntitat
{
public:
	TxConsultaEntitat(System::String^ correu); 
	List<System::String^>^ ObteResultat();
	void executar();
private:
	List<System::String^>^ res;
	System::String^ _correu;

};

