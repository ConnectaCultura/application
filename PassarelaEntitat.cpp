#include "pch.h"
#include "PassarelaEntitat.h"
using namespace MySql::Data::MySqlClient;

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

void PassarelaEntitat::esborra() {
	System::String^ sql = "DELETE FROM Entitat WHERE correu_electronic='" + _correuElectronic + "';";
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}


