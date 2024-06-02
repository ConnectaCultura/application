#include "pch.h"
#include "TxBaixaEntitat.h"

TxBaixaEntitat::TxBaixaEntitat() {
}

TxBaixaEntitat::TxBaixaEntitat(System::String^ contrasenya) {
	_contrasenya = contrasenya;
}


void TxBaixaEntitat::executar() {
	// Necessito la sessió per agafar el correu electronic de l'entitat

	Sessio^ s = Sessio::getInstance();
	PassarelaUsuari^ u = s->obteUsuari();

	System::String^ c = u->obteContrasenya();
	if (c != _contrasenya) throw std::runtime_error("La contrasenya no és correcta, l'entitat no s'ha esborrat.");
	TxConsultaEsdeveniments txCE(u->obteCorreuElectronic(), "", false, false, false);
	txCE.executar();
	List<List<System::String^>^>^ res = txCE.obteResultat();
	if (res == nullptr || res->Count == 0) {
		u->setInactiu();
		u->modifica();
		s->tancaSessio();
	}
	else {
		throw std::runtime_error("No es pot donar de baixa l'entitat perque te esdeveniments no acabats");
	}

}