#include "pch.h"
#include "TxConsultaEsdeveniment.h"

TxConsultaEsdeveniment::TxConsultaEsdeveniment(String^ nom, String^ inici, String^ fi) {
	_nom = nom;
	_inici = inici;
	_fi = fi;

}

void TxConsultaEsdeveniment::executar() {
	CercadoraEsdeveniment cEsd;
	PassarelaEsdeveniment^ esdev = cEsd.CercaEsdeveniment(_nom, _inici, _fi);
	CercadoraUsuari cEnt;
	PassarelaUsuari^ us = cEnt.cercaUsuari(esdev->obteCorreu());
	List<System::String^>^ sol = gcnew List<System::String^>();
	sol->Add(esdev->obteDescripcio());
	//entitat organitzadora
	sol->Add(esdev->obteCorreu());
	sol->Add(esdev->obteTipus());
	sol->Add(Convert::ToString(esdev->obtePreu()));
	sol->Add(Convert::ToString(esdev->obteAforament()));
	_result = sol;
	return;
}

List<System::String^>^ TxConsultaEsdeveniment::obteResultat() {
	return _result;
}
