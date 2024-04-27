#pragma once
#include "Connexio.h"
#include "PassarelaUsuari.h"
//#include "PassarelaEsdeveniment.h"

ref class PassarelaCompra
{
private:
	System::String^ dia_compra;
	PassarelaUsuari^ usuari;
	//PassarelaEsdeveniment esdeveniment;


public:
	PassarelaCompra(System::String^ dc, PassarelaUsuari^ u/*, PassarelaEsdeveniment e*/);
	void esborra();
};

