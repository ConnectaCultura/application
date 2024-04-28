#include "pch.h"
#include "CercadoraAjuntament.h"

PassarelaAjuntament^ CercadoraAjuntament::cercaAjuntament(System::String^ correu) {
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Ajuntament WHERE correu_electronic = '" + correu + "'";
	MySqlDataReader^ dataReader = con->executar(sql);
	if (dataReader->Read()) {
		System::String^ correu_el = dataReader->GetString(0);
		int postal = dataReader->GetInt32(1);
		int telefon = dataReader->GetInt32(2);
		con->tancarConnexio();
		return gcnew PassarelaAjuntament(correu_el, postal, telefon);
	}
	else {
		throw std::runtime_error("L'Entitat no existeix");
	}

}
List<PassarelaAjuntament^>^ CercadoraAjuntament::ObteTots() {
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Ajuntament";
	MySqlDataReader^ dataReader = con->executar(sql);
	List<PassarelaAjuntament^>^ va = gcnew List<PassarelaAjuntament^>();
	while (dataReader->Read()) {
		System::String^ correu_electronic = dataReader->GetString(0);
		int postal = dataReader->GetInt32(1);
		int telefon = dataReader->GetInt32(2);
		va->Add(gcnew PassarelaAjuntament(correu_electronic, postal, telefon));
	}
	con->tancarConnexio();
	return va;
}

