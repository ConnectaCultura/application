#pragma once

#include "Connexio.h"

ref class PassarelaUsuari
{

private:
	System::String^ nom;
	System::String^ correuElectronic;
	System::String^ contrasenya;
	System::String^ tipus;

public:
	PassarelaUsuari(System::String^ ceU, System::String^ nU, System::String^ cU, System::String^ tU);
	PassarelaUsuari^ operator=(const PassarelaUsuari^ other);
	System::String^ obteCorreuElectronic();
	System::String^ obteContrasenya();
	System::String^ obteNom();
	void modificaNom(System::String^ nom);
	System::String^ obteTipus();
	void insereix();
	void esborra();
	void modifica();
};

