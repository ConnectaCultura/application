#pragma once
#include "Connexio.h"

ref class PassarelaEntitat
{
private:
	System::String^ _correuElectronic;
	System::String^ _descripcio;
	System::String^ _modalitat;
	System::String^ _ajuntament;

public:
	PassarelaEntitat() {}
	PassarelaEntitat(System::String^ cE, System::String^ des, System::String^ m, System::String^ a);
	System::String^ obteModalitat();
	System::String^ obteDescripcio();
	System::String^ obteCorreuElectronic();
	System::String^ obteAjuntament();
	void insereix();
};
