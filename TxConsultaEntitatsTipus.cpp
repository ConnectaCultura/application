#include "pch.h"
#include "TxConsultaEntitatsTipus.h"

TxConsultaEntitatsTipus::TxConsultaEntitatsTipus()
{
	//Sessio& se = Sessio::getInstance();
	//PassarellaUsuari u = Sessio.obteUsuari();
	//_ajuntamentPrincipal = u.AjuntamentPrincipal;
	//_ajuntamentPrincipal = "ap";
}


void TxConsultaEntitatsTipus::executar()
{
	CercadoraEntitat cerEnt; 
	List<PassarelaEntitat^>^ lle = cerEnt.CercaModalitat(_modalitat);
	CercadoraUsuari cu;
	for each (PassarelaEntitat ^ e in lle) {
		PassarelaUsuari^ u = cu.cercaUsuari(e->obteCorreuElectronic());
		List<System::String^>^ novaEntitat = gcnew List<System::String^>();

		novaEntitat->Add(u->obteNom());
		novaEntitat->Add(e->obteCorreuElectronic());
		novaEntitat->Add(e->obteDescripcio());
		novaEntitat->Add(e->obteModalitat());
		novaEntitat->Add(e->obteAjuntament());

		_llistaEntitats->Add(novaEntitat);
	}
	return;
}

void TxConsultaEntitatsTipus::SetModalitat(System::String^ modalitat) 
{
	_modalitat = modalitat;
}

List<List<System::String^>^>^ TxConsultaEntitatsTipus::obteResultat()
{
	return _llistaEntitats;
}