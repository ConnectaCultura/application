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
	CercadoraEntitat cerEnt; // no es perque no em deixa fer cerEnt();
	_llistaEntitats = cerEnt.CercaModalitat(_modalitat);
	//aqui no tinc que fer ni try ni catch no?
}

void TxConsultaEntitatsTipus::SetModalitat(System::String^ modalitat) 
{
	_modalitat = modalitat;
}

List<PassarelaEntitat^>^ TxConsultaEntitatsTipus::ObteResultat()
{
	return _llistaEntitats;
}