#include "pch.h"
#include "TxConsultaEntitat.h"

TxConsultaEntitat::TxConsultaEntitat(System::String^ correu) {

	_correu = correu;
	array<System::String^>^ res;

}

void TxConsultaEntitat::executar() {
	CercadoraUsuari cU;
	PassarelaUsuari^ u = cU.cercaUsuari(_correu);

	List<System::String^>^ sol = gcnew List<System::String^>(3);
	sol[0] = u->obteNom();
	CercadoraEntitat cE;
	PassarelaEntitat^ e = cE.CercaEntitat(_correu);
	sol[1] = e->obteTipus();
	sol[2] = e->obteDescripcio();
	res = sol;
	return;


}

List<System::String^>^ TxConsultaEntitat::ObteResultat() {
	return res;
}