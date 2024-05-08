#include "pch.h"
#include "TxRegistreCiutada.h"

TxRegistreCiutada::TxRegistreCiutada( System::String^ nom, System::String^ correuElectronic, System::String^ contrasenya) {
	_nom = nom;
	_correuElectronic = correuElectronic;
	_contrasenya = contrasenya;
}

void TxRegistreCiutada::executar() {
	PassarelaUsuari u(_nom, _correuElectronic, _contrasenya, "ciutada");
	u.insereix();
	PassarelaCiutada c(_correuElectronic, 0);
	c.insereix();
}