#pragma once
#include "CercadoraEsdeveniment.h"

ref class TxModificaEsdeveniment
{
private:
	System::String^ _nom;
	System::String^ _inici;
	System::String^ _fi;
	System::String^ _preu;
	System::String^ _descripcio;
	System::String^ _tipus;

public:
	
	TxModificaEsdeveniment(System::String^ _nom, System::String^ _inici, System::String^ _fi, System::String^ _preu, System::String^ _descripcio, System::String^ _tipus);
	void executar();

};

//TxModificaEsdeveniment txME(_nom, _inici, _fi, preu, descripcio, tipus);