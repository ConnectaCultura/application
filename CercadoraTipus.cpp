#include "pch.h"
#include "CercadoraTipus.h"

List<System::String^>^ CercadoraTipus::ObteTots()
{
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Modalitat";
	MySqlDataReader^ dataReader = con->executar(sql);
	List<System::String^>^ vt = gcnew List<System::String^>();
	while (dataReader->Read()) {
		// Agafarem les columnes per índex, la primera és la 0
		System::String^ nom = dataReader->GetString(0);
		vt->Add(nom);
	}
	con->tancarConnexio();
	return vt;
}
//ho podria fer aqui el Add("") ///!!
//vt->Add("");////!!!!  vt->Add("Sense Filtre");