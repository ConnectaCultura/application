#include "pch.h"
#include "PassarelaCiutada.h"

PassarelaCiutada::PassarelaCiutada(System::String^ cE) {
	_correuElectronic = cE;
}

void PassarelaCiutada::insereix() {
	System::String^ sql = "INSERT INTO Ciutada VALUES ('" + _correuElectronic + "')";
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}