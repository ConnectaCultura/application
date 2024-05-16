#include "pch.h"
#include "TxConsultaCompres.h"

TxConsultaCompres::TxConsultaCompres(System::String^ correu) {
	_correu = correu;
}

void TxConsultaCompres::executar() {
	CercadoraCompra cComp;
	List<PassarelaCompra^>^ llistaCompra = cComp.CercaPerCiutada(_correu);

	_result = gcnew List<List<System::String^>^>();
	for (int i = 0; i < llistaCompra->Count; i++) {
		List<System::String^>^ laux = gcnew List<System::String^>;
		laux->Add(llistaCompra[i]->obteNomEsdev());
		laux->Add(llistaCompra[i]->obteDataInici());
		laux->Add(llistaCompra[i]->obteDataFi());
		laux->Add((llistaCompra[i]->obtePreu()).ToString());
		_result->Add(laux);
	}
}

List<List<System::String^>^>^ TxConsultaCompres::obteResultat() {
	return _result;
}