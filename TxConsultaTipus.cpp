#include "pch.h"
#include "TxConsultaTipus.h"

TxConsultaTipus::TxConsultaTipus() {}

void TxConsultaTipus::executar() 
{
	CercadoraTipus cerTipus;
	_result = cerTipus.obteTots();
}

List<System::String^>^ TxConsultaTipus::obteResultat()
{
	return _result;
}