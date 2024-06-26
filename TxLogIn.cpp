#include "pch.h"
#include "TxLogIn.h"

TxLogIn::TxLogIn(System::String^ correu, System::String^ contrasenya) {
	_correu = correu;
	_contrasenya = contrasenya;
}

void TxLogIn::executar() {
	CercadoraUsuari aux;
	PassarelaUsuari^ u = aux.cercaUsuari(_correu);
	System::String^ con_aux = u->obteContrasenya();
	Sessio^ s = Sessio::getInstance();
	if (con_aux != _contrasenya) {
		throw std::runtime_error("La contrasenya o el correu no son correctes");
	}
	else if (u->obteActiu() != 1){
		throw std::runtime_error("Aquest compte esta inactiu.");
	}
	else {
		s->iniciaSessio(u);
	}
}