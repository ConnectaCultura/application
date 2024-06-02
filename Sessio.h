#pragma once
#include "PassarelaUsuari.h"
ref class Sessio
{
public:
	static Sessio^ getInstance() {
		if (instance == nullptr) {
			instance = gcnew Sessio();
		}
		return instance;
	}

	PassarelaUsuari^ obteUsuari();
	void iniciaSessio(PassarelaUsuari^ u);
	void tancaSessio();
	void refrescaUsuari(PassarelaUsuari^ u);
	void modificaUsuari(System::String^ nom);
private:
	PassarelaUsuari^ usuari = nullptr;
	static Sessio^ instance = nullptr;
};

