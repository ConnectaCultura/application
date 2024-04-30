#pragma once
#include "PassarelaUsuari.h"
#include "PassarelaCiutada.h"

ref class TxRegistreCiutada
{
public:
	TxRegistreCiutada(System::String^ nom, System::String^ correuElectronic, System::String^ contrasenya, System::String^ ajuntament);
	void executar();
private:
	System::String^ _nom;
	System::String^ _correuElectronic;
	System::String^ _contrasenya;
	System::String^ _ajuntament;
};

