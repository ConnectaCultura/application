#include "pch.h"
#include "TxConsultaEntitatsTipus.h"

TxConsultaEntitatsTipus::TxConsultaEntitatsTipus()
{
	//Sessio& se = Sessio::getInstance();
	//PassarellaUsuari u = Sessio.ObteUsuari();
	//_ajuntamentPrincipal = u.AjuntamentPrincipal;
	_ajuntamentPrincipal = "ap";
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
		_llistaEntitats->Add(ll);
	}
	return;
}

void TxConsultaEntitatsTipus::SetTipus(System::String^ tipus) 
{
	_tipus = tipus;
}

List<List<System::String^>^>^ TxConsultaEntitatsTipus::ObteResultat()
{
	return _llistaEntitats;
}