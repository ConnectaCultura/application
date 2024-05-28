#include "pch.h"
#include "TxConsultaValoracio.h"

TxConsultaValoracio::TxConsultaValoracio()
{

}

TxConsultaValoracio::TxConsultaValoracio(System::String^ correuCiu, System::String^ nomEsdev, System::String^ dataIni, System::String^ dataFi, int puntuacio, System::String^ opinio)
{

}

void TxConsultaValoracio::executar()
{
	Sessio^ s = Sessio::getInstance();
	CercadoraValoracio cv;

	PassarelaValoracio^  = s->obteUsuari();
	PassarelaCiutada^ c = cC.cercaCiutada(u->obteCorreuElectronic());
	_resultat = gcnew List<System::String^>();
	_resultat->Add(u->obteCorreuElectronic());
	_resultat->Add(u->obteNom());
	_resultat->Add(c->obtePunts().ToString());
}

List<System::String^>^ TxConsultaValoracio::obteResultat()
{
	return _result;
}