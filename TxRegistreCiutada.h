#pragma once
#include "PassarelaUsuari.h"
#include "PassarelaCiutada.h"

ref class TxRegistreCiutada
{
public:
	TxRegistreCiutada( System::String^ nom, System::String^ correuElectronic, System::String^ contrasenya);
	void executar();
private:
	System::String^ _nom;
	System::String^ _correuElectronic;
	System::String^ _contrasenya;
};

