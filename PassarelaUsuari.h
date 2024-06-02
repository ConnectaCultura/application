#pragma once

#include "Connexio.h"

ref class PassarelaUsuari
{

private:
	System::String^ nom;
	System::String^ correuElectronic;
	System::String^ contrasenya;
	System::String^ tipus;
	int actiu;

public:
	PassarelaUsuari(System::String^ nU, System::String^ ceU, System::String^ cU, System::String^ tU, int act);
	PassarelaUsuari^ operator=(const PassarelaUsuari^ other);
	System::String^ obteCorreuElectronic();
	System::String^ obteContrasenya();
	System::String^ obteNom();
	void modificaNom(System::String^ nom);
	System::String^ obteTipus();
	int obteActiu();
	void setInactiu();
	void insereix();
	void esborra();
	void modifica();
	void modificaCorreu(System::String^ correuElectronic);
};

