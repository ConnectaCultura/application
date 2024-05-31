#include "pch.h"
#include "TxConsultaAjuntaments.h"

TxConsultaAjuntaments::TxConsultaAjuntaments(System::String^ ajuntament)
{
	_ajuntament = ajuntament;
}

void TxConsultaAjuntaments::executar()
{
	CercadoraAjuntament cerAju;
	if (_ajuntament == "Tots") {
		List<PassarelaAjuntament^>^ lla = cerAju.ObteTots();
		CercadoraUsuari cu;
		for each (PassarelaAjuntament ^ e in lla) {
			PassarelaUsuari^ u = cu.cercaUsuari(e->obteCorreuElectronic());
			if (u->obteActiu() == 1) {
				List<System::String^>^ nouAjuntament = gcnew List<System::String^>();
				nouAjuntament->Add(u->obteNom());
				nouAjuntament->Add(e->obtePostal().ToString());
				nouAjuntament->Add(e->obteTelefon().ToString());
				nouAjuntament->Add(e->obteCorreuElectronic());
				_llistaAjuntaments->Add(nouAjuntament);
			}
		}
	}
}

List<List<System::String^>^>^ TxConsultaAjuntaments::ObteResultat()
{
	return _llistaAjuntaments;
}
