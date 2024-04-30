#include "pch.h"
#include "PassarelaEntitat.h"

PassarelaEntitat::PassarelaEntitat(System::String^ cE, System::String^ des, System::String^ m, System::String^ a) {
	_correuElectronic = cE;
	_descripcio = des;
	_modalitat = m;
	_ajuntament = a;
}


void PassarelaEntitat::insereix() {
	System::String^ sql = "INSERT INTO Entitat VALUES ('" + _correuElectronic + "' , '" + _descripcio + "','" + _modalitat + "')";
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}

System::String^ PassarelaEntitat::obteAjuntament() {
	return this->_ajuntament;
}

System::String^ PassarelaEntitat::obteModalitat() {
	return this->_modalitat;
}

System::String^ PassarelaEntitat::obteDescripcio() {
	return this->_descripcio;
}
System::String^ PassarelaEntitat::obteCorreuElectronic() {
	return this->_correuElectronic;
}
