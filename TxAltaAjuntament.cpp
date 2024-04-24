#include "pch.h"
#include "TxAltaAjuntament.h"

TxAltaAjuntament::TxAltaAjuntament(System::String^ nom, System::String^ correuElectronic, System::String^ contrasenya, int nP, int nT) {
	_nom = nom;
	_correuElectronic = correuElectronic;
	_contrasenya = contrasenya;
	_numPostal = nP;
	_numTelefon = nT;

}

void TxAltaAjuntament::executar() {
	PassarelaUsuari u(_correuElectronic, _nom, _contrasenya, "ajuntament");
	u.insereix();
	PassarelaAjuntament a(_correuElectronic, _numPostal, _numTelefon);
	a.insereix();
}

	