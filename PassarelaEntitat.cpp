#include "pch.h"
#include "PassarelaEntitat.h"

PassarelaEntitat::PassarelaEntitat(System::String^ cE, System::String^ des, System::String^ t) {
	_correuElectronic = cE;
	_descripcio = des;
	_tipus = t;
}


void PassarelaEntitat::insereix() {
	System::String^ sql = "INSERT INTO Entitat VALUES ('" + _correuElectronic + "' , '" + _descripcio + "','" + _tipus + "')";
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}


void PassarelaEntitat::modifica() {
	System::String^ sql = "UPDATE Entitat SET descripcio='" + _descripcio + "', tipus='" + _tipus + ")";
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}

System::String^ PassarelaEntitat::obteTipus() {
	return this->_tipus;
}

System::String^ PassarelaEntitat::obteDescripcio() {
	return this->_descripcio;
}
System::String^ PassarelaEntitat::obteCorreuElectronic() {
	return this->_correuElectronic;
}

void PassarelaEntitat::modificaValors(System::String^ desc, System::String^ tip) {
	_descripcio = desc;
	_tipus = tip;
}