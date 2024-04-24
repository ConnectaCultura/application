#pragma once
#include "Connexio.h"
ref class PassarelaAjuntament
{
private:
	System::String^ _correuElectronic;
	System::String^ _nom;
	System::String^ _contrasenya;

public:
	PassarelaAjuntament() {}
	PassarelaAjuntament(System::String^ cE, System::String^ des, System::String^ t);
	System::String^ obteNom();
	System::String^ obteContrasenya();
	System::String^ obteCorreuElectronic();
	void insereix();





};

