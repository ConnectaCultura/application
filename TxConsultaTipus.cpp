#include "pch.h"
#include "TxConsultaTipus.h"

TxConsultaTipus::TxConsultaTipus() {}
//faig el Add("") aqui????? ///!!

void TxConsultaTipus::executar() 
{
	CercadoraTipus cerTipus;
	_result = cerTipus.ObteTots();
}

List<System::String^>^ TxConsultaTipus::ObteResultat()
{
	return _result;
}