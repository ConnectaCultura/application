#pragma once
#include "PassarelaEsdeveniment.h"
#include "PassarelaEntitat.h"
#include "PassarelaUsuari.h"
#include "Sessio.h"

ref class TxAltaEsdeveniment
{

public:
	TxAltaEsdeveniment(System::String^ n, System::String^ des, System::String^ data_ini, System::String^ data_f, int afor, float p, System::String^ t);
	void executar();

private:
	System::String^ correu_entitat;
	System::String^ nom;
	System::String^ descripcio;
	System::String^ data_inici;
	System::String^ data_fi;
	int aforament;
	float preu;
	System::String^ tipus;
};

