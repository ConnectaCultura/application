#pragma once
#include "PassarelaUsuari.h"
#include "Connexio.h"
#include <stdexcept>

ref class CercadoraUsuari
{
public:
	CercadoraUsuari() {};
	PassarelaUsuari^ cercaUsuari(System::String^ correu);
};

