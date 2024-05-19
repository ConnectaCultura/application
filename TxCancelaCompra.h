#pragma once
#include "Sessio.h"
#include "PassarelaUsuari.h"
#include "CercadoraCompra.h"
#include "CercadoraCiutada.h"

#include <stdexcept>

ref class TxCancelaCompra
{
private:
	System::String^ _contrasenya;
	System::String^ _correuCiutada;
	System::String^ _nomesdev;
	System::String^ _datainici;
	System::String^ _datafi;

public:
	TxCancelaCompra(System::String^ correuCiutada, System::String^ nomesdev, System::String^ datainici, System::String^ datafi);
	void executar();
};

