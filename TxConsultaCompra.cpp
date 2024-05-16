#include "pch.h"
#include "TxConsultaCompra.h"

TxConsultaCompra::TxConsultaCompra(System::String^ correuCiu, System::String^ nomEsdev, System::String^ dataIni, System::String^ dataFi, float preu) {
	_correuCiu = correuCiu;
	_nomEsdev = nomEsdev;
	_dataIni = dataIni;
	_dataFi = dataFi;
	_preu = preu;
}

void TxConsultaCompra::executar() {
	CercadoraCompra cComp;
	PassarelaCompra pComp = ;
}

List<System::String^>^ TxConsultaCompra::obteResultat() {

}