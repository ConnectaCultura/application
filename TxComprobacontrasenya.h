#pragma once
#include "Sessio.h"
#include <stdexcept>

ref class TxComprobacontrasenya
{
private:
		System::String^ _contrasenya;

public:
		TxComprobacontrasenya(System::String^ contrasenya);
		void executar();
};

