#pragma once
#include "Sessio.h"
#include <stdexcept>

ref class TxComprovaContrasenya
{
private:
	System::String^ _contrasenya;

public:
	TxComprovaContrasenya(System::String^ contrasenya);
	void executar();
};

