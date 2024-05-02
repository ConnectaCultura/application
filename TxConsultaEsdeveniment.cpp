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
	_result->Add(esdev->obteDescripcio());
	_result->Add(us->obteNom());
	_result->Add(esdev->obteTipus());
	_result->Add((esdev->obtePreu()).ToString());
	_result->Add((esdev->obteAforament()).ToString());
	//Quan es crei les compres
	//CercadoraCompres cC;
	//_result->Add((cC.cercaNCompres(esdev->obteCorreu())).ToString());

	
}

List<System::String^>^ TxConsultaEsdeveniment::obteResultat() {
	return _result;
}