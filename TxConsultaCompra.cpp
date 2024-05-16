#include "pch.h"
#include "TxConsultaCompra.h"

TxConsultaCompra::TxConsultaCompra(System::String^ correuCiu, System::String^ nomEsdev, System::String^ dataIni, System::String^ dataFi) {
	_correuCiu = correuCiu;
	_nomEsdev = nomEsdev;
	_dataIni = dataIni;
	_dataFi = dataFi;
}

void TxConsultaCompra::executar() {
	CercadoraCompra cComp;
	PassarelaCompra^ pComp = cComp.CercaCompra(_correuCiu,_nomEsdev, _dataIni, _dataFi);

	List<System::String^>^ sol = gcnew List<System::String^>();
	sol->Add(_correuCiu);
	sol->Add(_nomEsdev);
	sol->Add(_dataIni);
	sol->Add(_dataFi);
	sol->Add(pComp.obtePreu().ToString());

	_result = sol;
	return;
}

List<System::String^>^ TxConsultaCompra::obteResultat() {
	return _result;
}