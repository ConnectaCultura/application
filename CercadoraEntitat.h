#pragma once
#include <list>
#include "PassarelaEntitat.h"
#include <stdexcept>
using namespace System;
using namespace System::Collections::Generic;
using namespace MySql::Data::MySqlClient;

ref class CercadoraEntitat
{
	public:
		CercadoraEntitat() {}
		PassarelaEntitat^ CercaEntitat(System::String^ cE);
		List<PassarelaEntitat^>^ ObteTots();
		List<PassarelaEntitat^>^ CercaModalitat(System::String^ t);

};

