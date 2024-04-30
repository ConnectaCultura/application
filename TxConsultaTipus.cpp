#include "pch.h"
#include "TxConsultaTipus.h"

TxConsultaTipus::TxConsultaTipus() {}

void TxConsultaTipus::executar() 
{
	CercadoraTipus cerTipus;
	_result = cerTipus.ObteTots();
}

List<System::String^>^ TxConsultaTipus::ObteResultat()
{
	return _result;
}