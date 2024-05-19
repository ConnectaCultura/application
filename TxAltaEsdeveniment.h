#pragma once
#include "PassarelaEsdeveniment.h"
#include "PassarelaEntitat.h"
#include "PassarelaUsuari.h"
#include "Sessio.h"

ref class TxAltaEsdeveniment
{

public:
	TxAltaEsdeveniment(System::String^ n, System::String^ des, System::DateTime data_ini, System::DateTime data_f, int^ afor, System::String^ p, System::String^ tipus);
	void executar();

private:
	System::String^ nom;
	System::String^ descripcio;
	System::DateTime data_inici;
	System::DateTime data_fi;
	int^ aforament;
	System::String^ preu;
	System::String^ tipus;
};