#include "pch.h"
#include "PassarelaAjuntament.h"


PassarelaAjuntament::PassarelaAjuntament(System::String^ cE, System::String^ n, System::String^ c) {
	_correuElectronic = cE;
	_nom = n;
	_contrasenya = c;
}

void PassarelaAjuntament::insereix() {
	//Revisar el codi SQL quan es fasi la taula de la base de dades
	System::String^ sql = "INSERT INTO Entitat VALUES ('" + _correuElectronic + "' , '" + _nom + "','" + _contrasenya + "')";
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}

System::String^ PassarelaAjuntament::obteNom() {
	return this->_nom;
}

System::String^ PassarelaAjuntament::obteContrasenya() {
	return this->_contrasenya;
}
System::String^ PassarelaAjuntament::obteCorreuElectronic() {
	return this->_correuElectronic;
}