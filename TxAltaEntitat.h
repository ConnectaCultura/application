#pragma once
#include "PassarelaEntitat.h"
#include "PassarelaUsuari.h"

ref class TxAltaEntitat
{
public:
	TxAltaEntitat(System::String^ nom, System::String^ descripcio, System::String^ modalitat, System::String^ correuElectronic, System::String^ contrasenya, System::String^ ajuntament);
	void executar();
private:
	System::String^ _nom;
	System::String^ _descripcio;
	System::String^ _modalitat;
	System::String^ _correuElectronic;
	System::String^ _contrasenya;
	System::String^ _ajuntament;
};
