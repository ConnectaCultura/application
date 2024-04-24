#include "pch.h"
#include "PassarelaCiutada.h"

PassarelaCiutada::PassarelaCiutada(System::String^ cE) {
	_correuElectronic = cE;
}

void PassarelaCiutada::insereix() {
	System::String^ sql = "INSERT INTO Ciutada(correu_electronic, punts) VALUES ('" + _correuElectronic + "','" + 0 + "')";
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}