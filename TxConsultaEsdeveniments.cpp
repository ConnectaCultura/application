#include "pch.h"
#include "TxConsultaEsdeveniments.h"

TxConsultaEsdeveniments::TxConsultaEsdeveniments(System::String^ correu) {
	_correu = correu;
}

void TxConsultaEsdeveniments::executar() {
	CercadoraEsdeveniment cEsdev;
	//if (_correu == "") {
		List<PassarelaEsdeveniment^>^ llistaEsdev = cEsdev.obteTots();
		_result = gcnew List<List<System::String^>^>();
		for (int i = 0; i < llistaEsdev->Count; i++) {
			List<System::String^>^ laux = gcnew List<System::String^>;
			laux->Add(llistaEsdev[i]->obteNom());
			laux->Add(llistaEsdev[i]->obteData_inici());
			laux->Add(llistaEsdev[i]->obteData_fi());
			laux->Add((llistaEsdev[i]->obtePreu()).ToString());
			_result->Add(laux);
		}
	//}
	/*
	else {
		List<PassarelaEsdeveniment^>^ llistaEsdev = cEsdev.obteEsdevEntitat(_correu);
		_result = gcnew List<List<System::String^>^>();
		for (int i = 0; i < llistaEsdev->Count; i++) {
			List<System::String^>^ laux = gcnew List<System::String^>;
			laux->Add(llistaEsdev[i]->obteNom());
			laux->Add(llistaEsdev[i]->obteData_inici());
			laux->Add(llistaEsdev[i]->obteData_fi());
			laux->Add((llistaEsdev[i]->obtePreu()).ToString());
			_result->Add(laux);
		}
	*/
	//}

}

List<List<System::String^>^>^ TxConsultaEsdeveniments::obteResultat() {
	return _result;
}
