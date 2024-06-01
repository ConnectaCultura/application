#include "pch.h"
#include "TxConsultaEntitats.h"

TxConsultaEntitats::TxConsultaEntitats(System::String^ tipus, System::String^ ajuntament, System::String^ nom)
{
	_nom = nom;
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
	}
	else if (_tipus != "Totes" && _ajuntament=="Tots") {
		List<PassarelaEntitat^>^ lle = cerEnt.CercaTipus(_tipus);
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
	}

	else if (_ajuntament != "Tots" && _tipus =="Totes") {
		List<PassarelaEntitat^>^ lle = cerEnt.CercaAjuntament(_ajuntament);
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
	}

	else{
		List<PassarelaEntitat^>^ lle = cerEnt.CercaTipusAjuntament(_tipus, _ajuntament);
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
	}

	return;
}

List<List<System::String^>^>^ TxConsultaEntitats::ObteResultat()
{
	return _llistaEntitats;
}