#pragma once
#include "Connexio.h"

ref class PassarelaCiutada
{
private:
	System::String^ _correuElectronic;
	System::String^ _ajuntament;

public:
	PassarelaCiutada() {}
	PassarelaCiutada(System::String^ cE, System::String^ a);
	System::String^ obteCorreuElectronic();
	System::String^ obteAjuntament();
	void insereix();
};

