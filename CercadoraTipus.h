#pragma once
#include <list> 

using namespace System;
using namespace System::Collections::Generic;
using namespace MySql::Data::MySqlClient;

ref class CercadoraTipus
{
	public:
		CercadoraTipus() {}
		List<System::String^>^ ObteTots();
};

