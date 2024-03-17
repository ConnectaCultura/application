#include "pch.h"
#include "TxRegistreCiutada.h"

TxRegistreCiutada::TxRegistreCiutada(System::String^ ajuntament, System::String^ nom, System::String^ correuElectronic, System::String^ contrasenya) {
	_ajuntament = ajuntament;
	_nom = nom;
	_correuElectronic = correuElectronic;
	_contrasenya = contrasenya;
}

void TxRegistreCiutada::executar() {
	PassarelaUsuari u(_nom, _correuElectronic, _contrasenya, "ciutada");

	u.insereix();
	PassarelaCiutada c(_correuElectronic, _ajuntament);
	e.insereix();
}