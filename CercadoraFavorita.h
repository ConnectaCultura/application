#pragma once

#include "PassarelaFavorita.h"
#include "Connexio.h"
#include <stdexcept>

using namespace System;
using namespace System::Collections::Generic;
using namespace MySql::Data::MySqlClient;

ref class CercadoraFavorita
{
public:
	CercadoraFavorita() {}
	PassarelaFavorita^ obteFavorita(String^ correuC, String^ correuE);
	List<PassarelaFavorita^>^ obteTotesPerCiutada(String^ correuC);

};

