#pragma once
#include "PassarelaValoracio.h"
#include <list>
#include <stdexcept>

using namespace System;
using namespace System::Collections::Generic;
using namespace MySql::Data::MySqlClient;

ref class CercadoraValoracio
{
public:
	CercadoraValoracio() {}
	PassarelaValoracio^ CercaValoracio(System::String^ Ciutada, System::String^ esdeveniment, System::String^ inici, System::String^ fi);
	List<PassarelaValoracio^>^ CercaPerEsdeveniment(System::String^ esdeveniment, System::String^ inici, System::String^ fi);
	List<PassarelaValoracio^>^ CercaPerCiutada(System::String^ ciutada);
};

