#pragma once
#include "PassarelaUsuari.h"
#include "CercadoraUsuari.h"

ref class TxModificaCiutada
{
private:
	System::String^ _nom;
	PassarelaUsuari^ _user;

public:
	TxModificaCiutada(System::String^ nom, PassarelaUsuari^ u);
	void executar();

};

