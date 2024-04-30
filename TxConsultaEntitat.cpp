#include "pch.h"
#include "TxConsultaEntitat.h"

TxConsultaEntitat::TxConsultaEntitat(System::String^ correu) {
	_correu = correu;
}

void TxConsultaEntitat::executar() {
	CercadoraUsuari cU;
	PassarelaUsuari^ u = cU.cercaUsuari(_correu);

	List<System::String^>^ sol = gcnew List<System::String^>(3);
	sol->Add(u->obteNom());
	CercadoraEntitat cE;
	PassarelaEntitat^ e = cE.CercaEntitat(_correu);
	sol->Add(e->obteDescripcio());
	sol->Add(e->obteModalitat());
	sol->Add(e->obteAjuntament());
	_res = sol;
	return;
}

List<System::String^>^ TxConsultaEntitat::obteResultat() {
	return _res;
}