#include "pch.h"
#include "TxConsultaEntitats.h"

TxConsultaEntitats::TxConsultaEntitats(System::String^ tipus, System::String^ ajuntament)
{
	_tipus = tipus;
	_ajuntament = ajuntament;
}

void TxConsultaEntitats::executar()
{
	CercadoraEntitat cerEnt;
	if (_tipus == "Totes" && _ajuntament == "Tots") {
		List<PassarelaEntitat^>^ lle = cerEnt.ObteTots();
		CercadoraUsuari cu;
		for each (PassarelaEntitat ^ e in lle) {
			PassarelaUsuari^ u = cu.cercaUsuari(e->obteCorreuElectronic());
			List<System::String^>^ novaEntitat = gcnew List<System::String^>();
			novaEntitat->Add(u->obteNom());
			novaEntitat->Add(e->obteDescripcio());
			novaEntitat->Add(e->obteTipus());
			novaEntitat->Add(e->obteCorreuElectronic());
			novaEntitat->Add(e->obteAjuntament());
			_llistaEntitats->Add(novaEntitat);
		}
	}
	else if (_tipus != "Totes" && _ajuntament=="Tots") {
		List<PassarelaEntitat^>^ lle = cerEnt.CercaTipus(_tipus);
		CercadoraUsuari cu;
		for each (PassarelaEntitat ^ e in lle) {
			PassarelaUsuari^ u = cu.cercaUsuari(e->obteCorreuElectronic());
			List<System::String^>^ ll = gcnew List<System::String^>();
			ll->Add(u->obteNom());
			ll->Add(e->obteDescripcio());
			ll->Add(e->obteTipus());
			ll->Add(e->obteCorreuElectronic());
			ll->Add(e->obteAjuntament());
			_llistaEntitats->Add(ll);
		}
	}

	else if (_ajuntament != "Tots" && _tipus =="Totes") {
		List<PassarelaEntitat^>^ lle = cerEnt.CercaAjuntament(_ajuntament);
		CercadoraUsuari cu;
		for each (PassarelaEntitat ^ e in lle) {
			PassarelaUsuari^ u = cu.cercaUsuari(e->obteCorreuElectronic());
			List<System::String^>^ ll = gcnew List<System::String^>();
			ll->Add(u->obteNom());
			ll->Add(e->obteDescripcio());
			ll->Add(e->obteTipus());
			ll->Add(e->obteCorreuElectronic());
			ll->Add(e->obteAjuntament());
			_llistaEntitats->Add(ll);
		}
	}

	else{
		List<PassarelaEntitat^>^ lle = cerEnt.CercaTipusAjuntament(_tipus, _ajuntament);
		CercadoraUsuari cu;
		for each (PassarelaEntitat ^ e in lle) {
			PassarelaUsuari^ u = cu.cercaUsuari(e->obteCorreuElectronic());
			List<System::String^>^ ll = gcnew List<System::String^>();
			ll->Add(u->obteNom());
			ll->Add(e->obteDescripcio());
			ll->Add(e->obteTipus());
			ll->Add(e->obteCorreuElectronic());
			ll->Add(e->obteAjuntament());
			_llistaEntitats->Add(ll);
		}
	}

	return;
}

List<List<System::String^>^>^ TxConsultaEntitats::ObteResultat()
{
	return _llistaEntitats;
}