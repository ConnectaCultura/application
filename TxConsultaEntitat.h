#pragma once
#include "CercadoraUsuari.h"
#include "CercadoraEntitat.h"
#include <list>
ref class TxConsultaEntitat
{
public:
	TxConsultaEntitat(System::String^ correu);
	void executar();
	List<System::String^>^ obteResultat();
private:

	System::String^ _correu;
	List<System::String^>^ _res;

};

