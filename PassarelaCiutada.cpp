#include "pch.h"
#include "PassarelaCiutada.h"

PassarelaCiutada::PassarelaCiutada(System::String^ cE, int punts) {
	_correuElectronic = cE;
	_punts = punts;
}

void PassarelaCiutada::insereix() {
	System::String^ sql = "INSERT INTO Ciutada(correu_electronic, punts) VALUES ('" + _correuElectronic + "','" + 0 + "')";
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}

int PassarelaCiutada::obtePunts()
{
	return _punts;
}
void PassarelaCiutada::modificaPunts() {
	System::String^ sql = "UPDATE Ciutada SET punts='" + _punts + "' WHERE correu_electronic = '" + _correuElectronic + "'";
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}

void PassarelaCiutada::setPunts(int punts) {
	_punts = punts;
}

