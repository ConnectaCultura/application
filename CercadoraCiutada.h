#pragma once
#include "PassarelaCiutada.h"
#include "Connexio.h"
#include <stdexcept>

using namespace System;
using namespace System::Collections::Generic;
using namespace MySql::Data::MySqlClient;

ref class CercadoraCiutada
{
public:
	CercadoraCiutada() {};
	PassarelaCiutada^ cercaCiutada(String^ correu);
};