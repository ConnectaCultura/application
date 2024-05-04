#pragma once
#include "PassarelaCompra.h"
#include <list>

using namespace System;
using namespace System::Collections::Generic;
using namespace MySql::Data::MySqlClient;

ref class CercadoraCompra
{

	// Per esdeveniment
public:
	CercadoraCompra() {}
	List<PassarelaCompra^>^ CercaPerEsdeveniment(System::String^ esdeveniment);
	PassarelaCompra CercaCompra(System::String^ Ciutada, System::String^ esdeveniment, System::String^ data_inici, System::String^ data_fi);
};

