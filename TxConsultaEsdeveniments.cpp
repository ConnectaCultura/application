#include "pch.h"
#include "TxConsultaEsdeveniments.h"

TxConsultaEsdeveniments::TxConsultaEsdeveniments(System::String^ correu, System::String^ nom, bool antics, bool gratuit, bool senseEntrada) {
	_correu = correu;
	_nom = nom;
	_antics = antics;
	_gratuit = gratuit;
	_senseEntrada = senseEntrada;
}

void TxConsultaEsdeveniments::executar() {
	if(_result==nullptr)
		_result = gcnew List<List<System::String^>^>();
	else 
		_result->Clear();
	CercadoraEsdeveniment cEsdev;
	List<PassarelaEsdeveniment^>^ llistaEsdev;
	if (_correu == System::String::Empty && _nom == System::String::Empty)  llistaEsdev = cEsdev.obteTots();
	else if (_correu == System::String::Empty && _nom != System::String::Empty) llistaEsdev = cEsdev.obtePerNom(_nom);
	else if (_correu != System::String::Empty && _nom == System::String::Empty) llistaEsdev = cEsdev.obteEsdevEntitat(_correu);
	else llistaEsdev = cEsdev.obteEsdevEntitatNom(_nom, _correu);
	for (int i = 0; i < llistaEsdev->Count; i++) {
		if (_antics || (!_antics && llistaEsdev[i]->obteData_fi() >= System::DateTime::Now)) {
			if (!_gratuit || (_gratuit && (llistaEsdev[i]->obtePreu() == nullptr || llistaEsdev[i]->obtePreu() == "0"))) {
				if (!_senseEntrada || (_senseEntrada && llistaEsdev[i]->obtePreu() == nullptr)) {
					List<System::String^>^ laux = gcnew List<System::String^>;
					laux->Add(llistaEsdev[i]->obteNom());
					laux->Add(llistaEsdev[i]->obteData_inici().ToString());
					laux->Add(llistaEsdev[i]->obteData_fi().ToString());
					laux->Add(Convert::ToString(llistaEsdev[i]->obtePreu()));
					_result->Add(laux);
				}
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
