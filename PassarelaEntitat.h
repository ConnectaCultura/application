#pragma once
#include "Connexio.h"

ref class PassarelaEntitat
{
private:
	System::String^ _correuElectronic;
	System::String^ _descripcio;
	System::String^ _tipus;

public:
	PassarelaEntitat() {}
	PassarelaEntitat(System::String^ cE, System::String^ des, System::String^ t);

	void insereix();
	void esborra();
	System::String^ obteTipus();
	System::String^ obteDescripcio();
	System::String^ obteCorreuElectronic();
	void modificaValors(System::String^ desc, System::String^ tip);
	void modifica();

};
