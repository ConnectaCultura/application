#pragma once
#include "Connexio.h"

ref class PassarelaCiutada
{
private:
	System::String^ _correuElectronic;
	int _punts;

public:
	PassarelaCiutada() {}
	PassarelaCiutada(System::String^ cE, int punts);
	void insereix();
	void modificaPunts();
	void setPunts(int punts);
};

