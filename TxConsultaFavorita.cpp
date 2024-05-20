#include "pch.h"
#include "TxConsultaFavorita.h"

TxConsultaFavorita::TxConsultaFavorita(System::String^ correuE)
{
	_correuE = correuE;
}

void TxConsultaFavorita::executar()
{
	Sessio^ s = Sessio::getInstance();
	PassarelaUsuari^ u = s->obteUsuari();
	CercadoraFavorita cF;
	PassarelaFavorita^ f = cF.obteFavorita(u->obteCorreuElectronic(), _correuE);
	_resultat = gcnew List<System::String^>();
	_resultat->Add(u->obteCorreuElectronic());
	_resultat->Add(_correuE);
}

List<System::String^>^ TxConsultaFavorita::obteResultat()
{
	return _resultat;
}
