#include "pch.h"
#include "TxValorarEsdeveniment.h"

TxValorarEsdeveniment::TxValorarEsdeveniment(System::String^ correuCiutada, System::String^ nomesdev, System::String^ datainici, System::String^ datafi, int puntuacio, System::String^ opinio)
{
	_correuCiu = correuCiutada;
	_nomEsdev = nomesdev;
	_dataIni = datainici;
	_dataFi = datafi;
	_puntuacio = puntuacio;
	_opinio = opinio;
}

void TxValorarEsdeveniment::executar()
{
	PassarelaValoracio pv(_correuCiu, _nomEsdev, _dataIni, _dataFi, _puntuacio, _opinio);
	pv.insereix();
}

List<System::String^>^ TxValorarEsdeveniment::obteResultat()
{
	return _result;
}
