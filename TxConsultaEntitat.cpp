#include "pch.h"
#include "TxConsultaEntitat.h"


TxConsultaEntitat::TxConsultaEntitat(System::String^ correu) {

	_correu = correu;
	List<System::String^>^ res;

}

void TxConsultaEntitat::executar() {
	CercadoraUsuari cU;
	PassarelaUsuari^ u = cU.cercaUsuari(_correu);

	List<System::String^>^ sol = gcnew List<System::String^>();
	sol->Add(u->obteNom());
	CercadoraEntitat cE;
	PassarelaEntitat^ e = cE.CercaEntitat(_correu);
	sol->Add(e->obteTipus());
	sol->Add(e->obteDescripcio());
	sol->Add(e->obteAjuntament());
	res = sol;
	return;


}

List<System::String^>^ TxConsultaEntitat::ObteResultat() {
	return res;
}