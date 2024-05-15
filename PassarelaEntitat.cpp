#include "pch.h"
#include "PassarelaEntitat.h"

using namespace MySql::Data::MySqlClient;

PassarelaEntitat::PassarelaEntitat(System::String^ cE, System::String^ des, System::String^ t, System::String^ a) {
	_correuElectronic = cE;
	_descripcio = des;
	_tipus = t;
	_ajuntament = a;
}

void PassarelaEntitat::insereix() {
	System::String^ sql = "INSERT INTO Entitat VALUES ('" + _correuElectronic + "' , '" + _descripcio + "','" + _tipus + "','" + _ajuntament + "')";
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}


void PassarelaEntitat::esborra() {
	System::String^ sql = "DELETE FROM Entitat WHERE correu_electronic='" + _correuElectronic + "';";
  Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}


void PassarelaEntitat::modifica() {
	System::String^ sql = "UPDATE Entitat SET descripcio='" + _descripcio + "', modalitat='" + _tipus + "' WHERE correu_electronic = '" + _correuElectronic + "'";
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
System::String^ PassarelaEntitat::obteAjuntament() {
	return this->_ajuntament;
}

void PassarelaEntitat::modificaValors(System::String^ desc, System::String^ tip) {
	_descripcio = desc;
	_tipus = tip;
}

