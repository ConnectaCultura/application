#include "pch.h"
#include "TxConsultaEntitatsNom.h"

TxConsultaEntitatsNom::TxConsultaEntitatsNom(List<System::String^>^ ve) {
	_entitats = ve;
}
void TxConsultaEntitatsNom::executar() {
	CercadoraUsuari cu;
	List<System::String^>^ resultat = gcnew List<System::String^>();
	for each (System::String^ e in _entitats) {
		resultat->Add(cu.cercaUsuari(e)->obteNom());
	}
	_res = resultat;
	return;
}
List<System::String^>^ TxConsultaEntitatsNom::obteResultat() {
	return _res;
}
