#include "pch.h"
#include "CercadoraFavorita.h"

PassarelaFavorita^ CercadoraFavorita::obteFavorita(String^ correuC, String^ correuE) {
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Favorita WHERE correu_c= '" + correuC + "' AND correu_e='" + correuE + "'";
	MySqlDataReader^ dataReader = con->executar(sql);
	if (dataReader->Read()) {
		System::String^ correu_electronicC = dataReader->GetString(0);
		System::String^ correu_electronicE = dataReader->GetString(1);
		con->tancarConnexio();
		return gcnew PassarelaFavorita(correu_electronicC, correu_electronicE);
	}
	else {
		throw std::runtime_error("No es troba com favorit.");
	}
}

List<PassarelaFavorita^>^ CercadoraFavorita::obteTotesPerCiutada(String^ correuC) {
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Favorita WHERE correu_c= '" + correuC + "'";
	MySqlDataReader^ dataReader = con->executar(sql);
	List<PassarelaFavorita^>^ fvs = gcnew List<PassarelaFavorita^>();
	while (dataReader->Read()) {
		System::String^ correuEC = dataReader->GetString(0);
		System::String^ correuEE = dataReader->GetString(1);
		fvs->Add(gcnew PassarelaFavorita(correuEC, correuEE));
	}
	con->tancarConnexio();
	return fvs;
}