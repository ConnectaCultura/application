#pragma once
#include "PassarelaAjuntament.h"
#include "PassarelaUsuari.h"

ref class TxAltaAjuntament
{
public:
	TxAltaAjuntament(System::String^ nom, System::String^ correuElectronic, System::String^ contrasenya, int nP, int nT);
	void executar();
private:
	System::String^ _nom;
	System::String^ _correuElectronic;
	System::String^ _contrasenya;
	int _numPostal;
	int _numTelefon;
};
