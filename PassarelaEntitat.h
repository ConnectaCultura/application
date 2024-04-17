#pragma once
#include "Connexio.h"

ref class PassarelaEntitat
{
private:
	System::String^ _correuElectronic;
	System::String^ _descripcio;
	System::String^ _modalitat;

public:
	PassarelaEntitat() {}
	PassarelaEntitat(System::String^ cE, System::String^ des, System::String^ m);
	System::String^ obteModalitat();
	System::String^ obteDescripcio();
	System::String^ obteCorreuElectronic();
	void insereix();
};
