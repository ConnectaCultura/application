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
	CercadoraEntitat cerEnt; // no es perque no em deixa fer cerEnt();
	_llistaEntitats = cerEnt.ObteTots();
}

List<PassarelaEntitat^>^ TxConsultaEntitats::ObteResultat()
{
	return _llistaEntitats;
}