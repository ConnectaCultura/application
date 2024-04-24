#pragma once
#include "Connexio.h"
ref class PassarelaAjuntament
{
private:
	System::String^ _correuElectronic;
	int _numeroPostal;
	int _numeroTelefon;

public:
	PassarelaAjuntament() {}
	PassarelaAjuntament(System::String^ cE, int nP, int nT);
	int obtePostal();
	int obteTelefon();
	System::String^ obteCorreuElectronic();
	void insereix();





};

