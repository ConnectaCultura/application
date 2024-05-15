#include "pch.h"
#include "TxAltaEntitat.h"


TxAltaEntitat::TxAltaEntitat(System::String^ nom, System::String^ descripcio, System::String^ tipus, System::String^ correuElectronic, System::String^ contrasenya, System::String^ ajuntament) {
	_nom = nom;
	_descripcio = descripcio;
	_tipus = tipus;
	_correuElectronic = correuElectronic;
	_contrasenya = contrasenya;
	_ajuntament = ajuntament;
}

void TxAltaEntitat::executar() {
	PassarelaUsuari u(_nom, _correuElectronic, _contrasenya, "entitat");
	u.insereix();
	PassarelaEntitat e(_correuElectronic, _descripcio, _tipus, _ajuntament);
	e.insereix();
}