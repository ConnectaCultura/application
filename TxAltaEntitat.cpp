#include "pch.h"
#include "TxAltaEntitat.h"


TxAltaEntitat::TxAltaEntitat(System::String^ nom, System::String^ descripcio, System::String^ modalitat, System::String^ correuElectronic, System::String^ contrasenya) {
	_nom = nom;
	_descripcio = descripcio;
	_modalitat = modalitat;
	_correuElectronic = correuElectronic;
	_contrasenya = contrasenya;
}

void TxAltaEntitat::executar() {
	PassarelaUsuari u(_nom, _correuElectronic, _contrasenya, "entitat");
	u.insereix();
	PassarelaEntitat e(_correuElectronic, _descripcio, _modalitat);
	e.insereix();
}