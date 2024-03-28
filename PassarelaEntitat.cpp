#include "pch.h"
#include "PassarelaEntitat.h"

PassarelaEntitat::PassarelaEntitat(System::String^ cE, System::String^ des, System::String^ t)
{
	_correuElectronic = cE;
	_descripcio = des;
	_tipus = t;
}

System::String^ PassarelaEntitat::GetCorreuE() 
{
	return _correuElectronic;
}
System::String^ PassarelaEntitat::GetDescripcio()
{
	return _descripcio;
}
System::String^ PassarelaEntitat::GetTipus()
{
	return _tipus;
}
