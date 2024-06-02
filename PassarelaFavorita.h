#pragma once

#include "Connexio.h"

ref class PassarelaFavorita
{
private:
	System::String^ _correuElectronicC;
	System::String^ _correuElectronicE;

public:
	PassarelaFavorita() {}
	PassarelaFavorita(System::String^ cEC, System::String^ cEE);
	void insereix();
	void esborra();
};

