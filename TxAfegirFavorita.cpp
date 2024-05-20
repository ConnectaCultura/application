#include "pch.h"
#include "TxAfegirFavorita.h"

TxAfegirFavorita::TxAfegirFavorita(System::String^ correuE)
{
	_correuE = correuE;
}

void TxAfegirFavorita::executar()
{
	Sessio^ s = Sessio::getInstance();
	PassarelaUsuari^ u = s->obteUsuari();
	PassarelaFavorita f(u->obteCorreuElectronic(), _correuE);
	f.insereix();
}

List<System::String^>^ TxAfegirFavorita::obteResultat()
{
	return _resultat;
}
