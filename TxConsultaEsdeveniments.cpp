#include "pch.h"
#include "TxConsultaEsdeveniments.h"

TxConsultaEsdeveniments::TxConsultaEsdeveniments(System::String^ correu, bool antics) {
	_correu = correu;
	_antics = antics;
}

void TxConsultaEsdeveniments::executar() {
	if(_result==nullptr)
		_result = gcnew List<List<System::String^>^>();
	else 
		_result->Clear();
	CercadoraEsdeveniment cEsdev;
	if (_correu == System::String::Empty) {
		List<PassarelaEsdeveniment^>^ llistaEsdev = cEsdev.obteTots();
		for (int i = 0; i < llistaEsdev->Count; i++) {
			if (_antics || (!_antics && llistaEsdev[i]->obteData_fi() >= System::DateTime::Now)) {
				List<System::String^>^ laux = gcnew List<System::String^>;
				laux->Add(llistaEsdev[i]->obteNom());
				laux->Add(llistaEsdev[i]->obteData_inici().ToString());
				laux->Add(llistaEsdev[i]->obteData_fi().ToString());
				laux->Add(Convert::ToString(llistaEsdev[i]->obtePreu()));
				_result->Add(laux);
			}
		}
	}
	
	else {
		List<PassarelaEsdeveniment^>^ llistaEsdev = cEsdev.obteEsdevEntitat(_correu);
		_result = gcnew List<List<System::String^>^>();
		for (int i = 0; i < llistaEsdev->Count; i++) {
			List<System::String^>^ laux = gcnew List<System::String^>;
			laux->Add(llistaEsdev[i]->obteNom());
			laux->Add(llistaEsdev[i]->obteData_inici().ToString());
			laux->Add(llistaEsdev[i]->obteData_fi().ToString());
			laux->Add(Convert::ToString(llistaEsdev[i]->obtePreu()));
			_result->Add(laux);
		}
	
	}

}

List<List<System::String^>^>^ TxConsultaEsdeveniments::obteResultat() {
	return _result;
}
