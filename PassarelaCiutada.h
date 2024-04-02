#pragma once
#include "Connexio.h"

ref class PassarelaCiutada
{
private:
	System::String^ _correuElectronic;

public:
	PassarelaCiutada() {}
	PassarelaCiutada(System::String^ cE);
	void insereix();
};

