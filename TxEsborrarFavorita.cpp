#include "pch.h"
#include "TxEsborrarFavorita.h"

TxEsborrarFavorita::TxEsborrarFavorita(System::String^ correuE)
{
	_correuE = correuE;
}

void TxEsborrarFavorita::executar()
{
	Sessio^ s = Sessio::getInstance();
	PassarelaUsuari^ u = s->obteUsuari();
	PassarelaFavorita f(u->obteCorreuElectronic() , _correuE);
	f.esborra();
}

List<System::String^>^ TxEsborrarFavorita::obteResultat()
{
	return _resultat;
}
