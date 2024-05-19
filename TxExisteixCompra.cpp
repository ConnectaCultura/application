#include "pch.h"
#include "TxExisteixCompra.h"

TxExisteixCompra::TxExisteixCompra(System::String^ cU, System::String^ nom, System::String^ inici, System::String^ fi) {
	_correuU = cU;
	_nom = nom;
	_inici = inici;
	_fi = fi;
}

void TxExisteixCompra::executar() {
	CercadoraCompra cC;
	if (cC.existeix(_correuU, _nom, _inici, _fi))
		_resultat = true;
	else
		_resultat = false;
}

bool TxExisteixCompra:: obteResultat() {
	return _resultat;
}
