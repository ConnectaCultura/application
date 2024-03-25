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
	_llistaEntitats = cerEnt.CercaTipus(_tipus);
	//aqui no tinc que fer ni try ni catch no?
}

void TxConsultaEntitatsTipus::SetTipus(System::String^ tipus) 
{
	_tipus = tipus;
}

List<PassarelaEntitat^>^ TxConsultaEntitatsTipus::ObteResultat()
{
	return _llistaEntitats;
}
/*
List<System::String^>^ TxConsultaEntitatsTipus::ObteTotsTipus()
{
	
}
*/