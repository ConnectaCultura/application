#include "pch.h"
#include "PassarelaFavorita.h"


PassarelaFavorita::PassarelaFavorita(System::String^ cEC, System::String^ cEE) {
	_correuElectronicC = cEC;
	_correuElectronicE = cEE;
}

void PassarelaFavorita::insereix() {
	System::String^ sql = "INSERT INTO Favorita(correu_c, correu_e) VALUES ('" + _correuElectronicC + "','" + _correuElectronicE + "')";
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}

void PassarelaFavorita::esborra() {
	System::String^ sql = "DELETE FROM Favorita WHERE correu_c= '" + _correuElectronicC + "' AND correu_e='" + _correuElectronicE + "'";
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}