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
	//PassarelaUsuari^ us = cEnt.cercaUsuari(esdev->obteCorreu());
	List<System::String^>^ sol = gcnew List<System::String^>();
	sol->Add(esdev->obteDescripcio());
	sol->Add(esdev->obteCorreu());
	sol->Add(esdev->obteTipus());
	sol->Add(esdev->obtePreu());
	sol->Add(Convert::ToString(esdev->obteAforament()));
	if (esdev->obteAforament() != nullptr) {
		// Entrades disponibles
		CercadoraCompra cC;
		int entradesDisp = 0;
		List<PassarelaCompra^>^ eD = cC.CercaPerEsdeveniment(_nom, _inici, _fi);
		for each (PassarelaCompra ^ c in eD) {
			entradesDisp = entradesDisp + int::Parse(c->obteQuantitat());
		}
		entradesDisp = *(esdev->obteAforament()) - entradesDisp;
		sol->Add(Convert::ToString(entradesDisp));

	}
	_result = sol;
	return;
}

List<System::String^>^ TxConsultaEsdeveniment::obteResultat() {
	return _result;
}
