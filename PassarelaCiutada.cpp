#include "pch.h"
#include "PassarelaCiutada.h"

PassarelaCiutada::PassarelaCiutada(System::String^ cE, System::String^ a) {
	_correuElectronic = cE;
	_ajuntament = a;
}

void PassarelaCiutada::insereix() {
	System::String^ sql = "INSERT INTO Ciutada VALUES ('" + _correuElectronic + "','" + _ajuntament + "')";
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}

System::String^ PassarelaCiutada::obteCorreuElectronic() {
	return this->_correuElectronic;
}
System::String^ PassarelaCiutada::obteAjuntament() {
	return this->_ajuntament;
}