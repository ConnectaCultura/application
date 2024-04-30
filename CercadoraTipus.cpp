#include "pch.h"
#include "CercadoraTipus.h"

List<System::String^>^ CercadoraTipus::obteTots() 
{
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Modalitat";
	MySqlDataReader^ dataReader = con->executar(sql);
	List<System::String^>^ vt = gcnew List<System::String^>();
	while (dataReader->Read()) {
		System::String^ nom = dataReader->GetString(0);
		vt->Add(nom);
	}
	con->tancarConnexio();
	return vt;
}

