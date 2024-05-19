#pragma once
#include "PassarelaCompra.h"
#include <list>
#include <stdexcept>

using namespace System;
using namespace System::Collections::Generic;
using namespace MySql::Data::MySqlClient;

ref class CercadoraCompra
{
public:
	CercadoraCompra() {}
	List<PassarelaCompra^>^ CercaPerEsdeveniment(System::String^ esdeveniment, System::String^ data_inici, System::String^ data_fi);
	PassarelaCompra^ CercaCompra(System::String^ Ciutada, System::String^ esdeveniment, System::String^ data_inici, System::String^ data_fi);
	bool existeix(System::String^ Ciutada, System::String^ esdeveniment, System::String^ data_inici, System::String^ data_fi);
};

