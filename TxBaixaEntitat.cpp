#include "pch.h"
#include "TxBaixaEntitat.h"

TxBaixaEntitat::TxBaixaEntitat() {
}

TxBaixaEntitat::TxBaixaEntitat(System::String^ contrasenya) {
	_contrasenya = contrasenya;
}

TxBaixaEntitat::~TxBaixaEntitat() {
}

void TxBaixaEntitat::executar() {
	// Necessito la sessi� per agafar el correu electr�nic de l'entitat
	//Sessio& s = Sessio::getInstance();

	//PassarelaUsuari u("", "jaja", "4321", "");
	PassarelaUsuari u;
	//u = v.obteUsuari();

	System::String^ c = u.obteContrasenya();
	if (c != _contrasenya) throw std::runtime_error("La contrasenya no �s correcta, l'usuari no s'ha esborrat.");
	u.esborra();
	// s.tancaSessio();
}