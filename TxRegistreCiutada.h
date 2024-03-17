#pragma once
#include "PassarelaCiutada.h"
#include "PassarelaUsuari.h"
ref class TxRegistreCiutada
{
public:
	TxRegistreCiutada(System::String^ ajuntament, System::String^ nom, System::String^ correuElectronic, System::String^ contrasenya);
	void executar();
private:
	System::String^ _ajuntament;
	System::String^ _nom;
	System::String^ _correuElectronic;
	System::String^ _contrasenya;
};

