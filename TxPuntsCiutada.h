#pragma once
#include "CercadoraCiutada.h"
ref class TxPuntsCiutada
{

private:
	System::String^ _correuciutada;
	int _punts;
public:
	TxPuntsCiutada(System::String^ correuciutada);
	void executar();
	int obteResultat();

};

