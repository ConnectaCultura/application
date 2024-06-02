#pragma once
#include "CercadoraUsuari.h"
#include "CercadoraAjuntament.h"
#include <list>
ref class TxConsultaAjuntament
{
public:
	TxConsultaAjuntament();
	TxConsultaAjuntament(System::String^ correu);
	List<System::String^>^ ObteResultat();
	void executar();
private:
	List<System::String^>^ res;
	System::String^ _correu;
};

