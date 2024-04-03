#include "pch.h"
#include "TxModificaEntitat.h"


TxModificaEntitat::TxModificaEntitat(System::String^ nom, System::String^ descripcio, System::String^ tipus, PassarelaUsuari^ u) {
	_nom = nom;
	_descripcio = descripcio;
	_tipus = tipus;
	_correuAntic = u->obteCorreuElectronic();
}
void TxModificaEntitat::executar() {
	

}
