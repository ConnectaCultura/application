#include "pch.h"
#include "TxConsultaAjuntament.h"

TxConsultaAjuntament::TxConsultaAjuntament(System::String^ correu) {
	_correu = correu;
	List<System::String^>^ res;
}

void TxConsultaAjuntament::executar() {
	CercadoraUsuari cU;
	PassarelaUsuari^ u = cU.cercaUsuari(_correu);

	List<System::String^>^ sol = gcnew List<System::String^>();
	sol->Add(u->obteNom());
	CercadoraAjuntament cA;
	PassarelaAjuntament^ a = cA.cercaAjuntament(_correu);
	sol->Add(a->obtePostal().ToString());
	sol->Add(a->obteTelefon().ToString());
	res = sol;
	return;
}

List<System::String^>^ TxConsultaAjuntament::ObteResultat() {
	return res;
}