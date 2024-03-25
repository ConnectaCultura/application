#pragma once
#include <list> // List
#include "PassarelaEntitat.h"

using namespace System;
using namespace System::Collections::Generic;
ref class CercadoraEntitat
{
	public:
		CercadoraEntitat() {}
		PassarelaEntitat^ CercaEntitat(System::String^ cE);
		List<PassarelaEntitat^>^ ObteTots();
		List<PassarelaEntitat^>^ ObteTipus(System::String^ t);

};

