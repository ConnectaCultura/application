#include "pch.h"
#include "TxConsultaEntitatsAjuntament.h"
TxConsultaEntitatsAjuntament::TxConsultaEntitatsAjuntament(System::String^ ajuntament) {
	_ajuntament = ajuntament;
}
void TxConsultaEntitatsAjuntament::executar() {
	CercadoraEntitat cerEnt;
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
	return;
}
List<List<System::String^>^>^ TxConsultaEntitatsAjuntament::ObteResultat() {
	return _llistaEntitats;
}