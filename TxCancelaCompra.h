#pragma once
#include "Sessio.h"
#include "PassarelaUsuari.h"
#include "PassarelaCompra.h"
#include <stdexcept>

ref class TxCancelaCompra
{
private:
	System::String^ _contrasenya;
	//PassarelaCompra _compra;

public:
	TxCancelaCompra(System::String^ contrasenya/*, PassarelaCompra compra*/);
	void executar();
};

