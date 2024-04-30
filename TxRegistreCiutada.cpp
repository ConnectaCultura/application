#include "pch.h"
#include "TxRegistreCiutada.h"

TxRegistreCiutada::TxRegistreCiutada( System::String^ nom, System::String^ correuElectronic, System::String^ contrasenya, System::String^ ajuntament) {
	_nom = nom;
	_correuElectronic = correuElectronic;
	_contrasenya = contrasenya;
	_ajuntament = ajuntament;
}

void TxRegistreCiutada::executar() {
	PassarelaUsuari u(_nom, _correuElectronic, _contrasenya, "ciutada");
	u.insereix();
	PassarelaCiutada c(_correuElectronic, _ajuntament);
	c.insereix();
}