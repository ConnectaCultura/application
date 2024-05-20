#include "pch.h"
#include "TxConsultaEntEsde.h"

TxConsultaEntEsde::TxConsultaEntEsde(System::String^ nomEnt, System::String^ nomE, System::String^ inici, System::String^ fi) {
	_nomE = nomE;
	_nomEnt = nomEnt;
	_inici = inici;
	_fi = fi;
}

void TxConsultaEntEsde::executar(){
	CercadoraEsdeveniment cC;
	_result = cC.existeix(_nomEnt, _nomE, _inici, _fi);
}

bool TxConsultaEntEsde::obteResultat() {
	return _result;
}