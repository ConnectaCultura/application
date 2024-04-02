#pragma once
#include "CercadoraUsuari.h"
#include "CercadoraEntitat.h"
ref class TxConsultaEntitat
{
public:
	TxConsultaEntitat(System::String^ correu);
	array<System::String^>^ executar();
private:

	System::String^ _correu;

};

