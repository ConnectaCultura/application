#include "pch.h"
#include "TxConsultaPerfil.h"

TxConsultaPerfil::TxConsultaPerfil()
{

}

void TxConsultaPerfil::executar()
{
	Sessio^ s = Sessio::getInstance();
	PassarelaUsuari^ u = s->obteUsuari();
	CercadoraCiutada cC;
	PassarelaCiutada^ c = cC.cercaCiutada(u->obteCorreuElectronic());
	_resultat  = gcnew List<System::String^>();
	_resultat->Add(u->obteCorreuElectronic());
	_resultat->Add(u->obteNom());
	_resultat->Add(c->obtePunts()->ToString());
}

List<System::String^>^ TxConsultaPerfil::obteResultat()
{
	return _resultat;
}
