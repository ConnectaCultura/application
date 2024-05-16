#include "pch.h"
#include "CercadoraUsuari.h"

PassarelaUsuari^ CercadoraUsuari::cercaUsuari(System::String^ correu) {
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Usuari WHERE correu_electronic = '" + correu + "'";
	MySqlDataReader^ dataReader = con->executar(sql);
	if (dataReader->Read()) {
		System::String^ correu_electronic = dataReader->GetString(0);
		System::String^ nom = dataReader->GetString(1);

		System::String^ tipus = dataReader->GetString(3);
		System::String^ contrasenya = dataReader->GetString(2);
		int actiu = dataReader->GetInt32(4);

		con->tancarConnexio();
		return gcnew PassarelaUsuari (nom, correu_electronic, contrasenya, tipus, actiu);
	}
	else {
		throw std::runtime_error("L'Usuari o la contrasenya no existeix");
	}

}
