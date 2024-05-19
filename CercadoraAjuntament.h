#pragma once
#include <list>
#include "PassarelaAjuntament.h"
#include <stdexcept>
using namespace System;
using namespace System::Collections::Generic;
using namespace MySql::Data::MySqlClient;
ref class CercadoraAjuntament
{
public:
	CercadoraAjuntament() {}
	PassarelaAjuntament^ cercaAjuntament(System::String^);
	List<PassarelaAjuntament^>^ ObteTots();
};

