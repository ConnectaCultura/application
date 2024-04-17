#include "pch.h"
#include "TxConsultaEntitat.h"

TxConsultaEntitat::TxConsultaEntitat(System::String^ correu) {

	_correu = correu;

}

array<System::String^>^ TxConsultaEntitat::executar() {
	CercadoraUsuari cU;
	PassarelaUsuari^ u = cU.cercaUsuari(_correu);

	array<System::String^>^ sol = gcnew array<System::String^>(3);
	sol[0] = u->obteNom();
	CercadoraEntitat cE;
	PassarelaEntitat^ e = cE.CercaEntitat(_correu);
	sol[1] = e->obteModalitat();
	sol[2] = e->obteDescripcio();
	return sol;


}