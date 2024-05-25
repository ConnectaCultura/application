#include "pch.h"
#include "TxCompraEntrada.h"

TxCompraEntrada::TxCompraEntrada(System::String^ nomEsdev, System::String^ data_inici, System::String^ data_fi, System::String^ preuEntrada, System::String^ quantitat, int puntsGastats){
	Sessio^ s = Sessio::getInstance();
	PassarelaUsuari^ u = s->obteUsuari();
	_correuCiutada = u->obteCorreuElectronic();
	_nomEsdev = nomEsdev;
	_dataInici = data_inici;
	_dataFi = data_fi;
	_preuEntrada = preuEntrada;
	_quantitat = quantitat;
	_puntsGastats = puntsGastats;
}

void TxCompraEntrada::executar() {
	PassarelaCompra com(_correuCiutada, _nomEsdev, _dataInici, _dataFi, _preuEntrada, _quantitat);
	com.insereix();
	int punts = puntsCompra();
	CercadoraCiutada ciu;
	PassarelaCiutada^ pas = ciu.cercaCiutada(_correuCiutada);

	pas->setPunts(pas->obtePunts() + punts-_puntsGastats);
	
	pas->modificaPunts();
}

int TxCompraEntrada::puntsCompra() {
	System::String^ preuDef = _preuEntrada->Replace('.', ',');
	double preuEntradaNumero = Convert::ToDouble(preuDef);
	int resultadoFinal = static_cast<int>(preuEntradaNumero / 10);
	return resultadoFinal;
}