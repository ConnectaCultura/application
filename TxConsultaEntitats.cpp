#include "pch.h"
#include "TxConsultaEntitats.h"

TxConsultaEntitats::TxConsultaEntitats() 
{
	//Sessio& se = Sessio::getInstance();
	//PassarellaUsuari u = Sessio.ObteUsuari();
	//_ajuntamentPrincipal = u.AjuntamentPrincipal;
}

void TxConsultaEntitats::executar()
{
	CercadoraEntitat cerEnt; 
	List<PassarelaEntitat^>^ lle = cerEnt.ObteTots();
	CercadoraUsuari cu;
	
	for each (PassarelaEntitat ^ e in lle) {
		PassarelaUsuari^ u = cu.cercaUsuari(e->obteCorreuElectronic());
		List<System::String^>^ novaEntitat = gcnew List<System::String^>();
		novaEntitat->Add(u->obteNom());
		novaEntitat->Add(e->obteDescripcio());
		novaEntitat->Add(e->obteTipus());
		novaEntitat->Add(e->obteCorreuElectronic());
		_llistaEntitats->Add(novaEntitat);
	}
	return;
}

List<List<System::String^>^>^ TxConsultaEntitats::ObteResultat()
{
	return _llistaEntitats;
}