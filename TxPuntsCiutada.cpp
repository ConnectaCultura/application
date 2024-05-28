#include "pch.h"
#include "TxPuntsCiutada.h"


TxPuntsCiutada::TxPuntsCiutada(System::String^ correuciutada) {
	_correuciutada = correuciutada;
}
void TxPuntsCiutada::executar() {
	CercadoraCiutada cc;
	PassarelaCiutada^ pc = cc.cercaCiutada(_correuciutada);
	_punts = pc->obtePunts();
}
int TxPuntsCiutada::obteResultat() {
	return _punts;
}