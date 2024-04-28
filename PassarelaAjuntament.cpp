#include "pch.h"
#include "PassarelaAjuntament.h"

PassarelaAjuntament::PassarelaAjuntament(System::String^ cE, int nP, int nT) {
	_correuElectronic = cE;
	_numeroPostal = nP;
	_numeroTelefon = nT;
}

void PassarelaAjuntament::insereix() {
	//Revisar el codi SQL quan es fasi la taula de la base de dades
	System::String^ sql = "INSERT INTO Ajuntament VALUES ('" + _correuElectronic + "' , '" + _numeroPostal + "','" + _numeroTelefon + "')";
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}

int PassarelaAjuntament::obtePostal() {
	return this->_numeroPostal;
}

int PassarelaAjuntament::obteTelefon() {
	return this->_numeroTelefon;
}
System::String^ PassarelaAjuntament::obteCorreuElectronic() {
	return this->_correuElectronic;
}