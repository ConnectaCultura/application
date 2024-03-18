#include "pch.h"
#include "PassarelaEntitat.h"

PassarelaEntitat::PassarelaEntitat(System::String^ cE, System::String^ des, System::String^ t)
{
	_correuElectronic = cE;
	_descripcio = des;
	_tipus = t;
}

