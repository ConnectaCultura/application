#include "pch.h"
#include "TxConsultaEntitatsTipus.h"

TxConsultaEntitatsTipus::TxConsultaEntitatsTipus(System::String^ tipus)
{
	_tipus = tipus;
}

void TxConsultaEntitatsTipus::executar()
{
	CercadoraEntitat cerEnt; 
	List<PassarelaEntitat^>^ lle = cerEnt.CercaTipus(_tipus);
	CercadoraUsuari cu;
	for each (PassarelaEntitat ^ e in lle) {
		PassarelaUsuari^ u = cu.cercaUsuari(e->obteCorreuElectronic());
		List<System::String^>^ ll = gcnew List<System::String^>();
		ll->Add(u->obteNom());
		ll->Add(e->obteDescripcio());
		ll->Add(e->obteTipus());
		ll->Add(e->obteCorreuElectronic());
		ll->Add(e->obteAjuntament());
		_llistaEntitats->Add(ll);
	}
	return;
}

List<List<System::String^>^>^ TxConsultaEntitatsTipus::ObteResultat()
{
	return _llistaEntitats;
}