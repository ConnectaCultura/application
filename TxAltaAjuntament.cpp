#include "pch.h"
#include "TxAltaAjuntament.h"

TxAltaAjuntament::TxAltaAjuntament(System::String^ nom, System::String^ correuElectronic, System::String^ contrasenya) {
	_nom = nom;
	_correuElectronic = correuElectronic;
	_contrasenya = contrasenya;
}

void TxAltaAjuntament::executar() {
	//No estic segur de com fer aixo
	PassarelaAjuntament u(_nom, _correuElectronic, _contrasenya, "ajuntament");
	u.insereix();
	PassarelaAjuntament e(_correuElectronic);
	e.insereix();
	