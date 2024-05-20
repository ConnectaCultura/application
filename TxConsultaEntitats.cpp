#include "pch.h"
#include "TxConsultaEntitats.h"

TxConsultaEntitats::TxConsultaEntitats(System::String^ nom, System::String^ tipus, System::String^ ajuntament)
{
	_nom = nom;
	_tipus = tipus;
	_ajuntament = ajuntament;
}

void TxConsultaEntitats::executar()
{
	CercadoraEntitat cerEnt;
	List<PassarelaEntitat^>^ lle;
	if (_tipus == "Totes" && _ajuntament == "Tots") lle = cerEnt.ObteTots();
	else if (_tipus != "Totes" && _ajuntament == "Tots") lle = cerEnt.CercaTipus(_tipus);
	else if (_ajuntament != "Tots" && _tipus == "Totes") lle = cerEnt.CercaAjuntament(_ajuntament);
	else lle = cerEnt.CercaTipusAjuntament(_tipus, _ajuntament);
	CercadoraUsuari cu;
	for each (PassarelaEntitat ^ e in lle) {
		PassarelaUsuari^ u = cu.cercaUsuari(e->obteCorreuElectronic());
		if (u->obteActiu() == 1) {
			if (_nom == "" || _nom == u->obteNom()) {
				List<System::String^>^ novaEntitat = gcnew List<System::String^>();
				novaEntitat->Add(u->obteNom());
				novaEntitat->Add(e->obteDescripcio());
				novaEntitat->Add(e->obteTipus());
				novaEntitat->Add(e->obteCorreuElectronic());
				novaEntitat->Add(e->obteAjuntament());
				_llistaEntitats->Add(novaEntitat);
			}
		}
	}
	return;
}

List<List<System::String^>^>^ TxConsultaEntitats::ObteResultat()
{
	return _llistaEntitats;
}