#pragma once
#include "Connexio.h"
#include "Sessio.h"
#include <stdexcept>

ref class PassarelaCiutada
{
private:
	System::String^ _correuElectronic;
	int _punts;

public:
	PassarelaCiutada() {}
	PassarelaCiutada(System::String^ cE, int punts);
	void insereix();
	int obtePunts();
	void modificaPunts();
	void setPunts(int punts);
};

