#include "pch.h"
#include "TxConsultaValoracio.h"


TxConsultaValoracio::TxConsultaValoracio(System::String^ correuCiu, System::String^ nomEsdev, System::String^ dataIni, System::String^ dataFi)
{
	_correuCiu = correuCiu;
	_nomEsdev = nomEsdev;
	_dataIni = dataIni;
	_dataFi = dataFi;
}

void TxConsultaValoracio::executar()
{
	CercadoraValoracio cv;
	PassarelaValoracio^ pv = cv.CercaValoracio(_correuCiu, _nomEsdev, _dataIni, _dataFi);
	_result = gcnew List<System::String^>();
	_result->Add(pv->obteCorreuCiutada());
	_result->Add(pv->obteNomEsdev());
	_result->Add(pv->obteDataInici());
	_result->Add(pv->obteDataFi());
	_result->Add(pv->obtePuntuacio().ToString());
	_result->Add(pv->obteOpinio());
}

List<System::String^>^ TxConsultaValoracio::obteResultat()
{
	return _result;
}