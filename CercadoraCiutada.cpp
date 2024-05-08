#include "pch.h"
#include "CercadoraCiutada.h"

PassarelaCiutada^ CercadoraCiutada::cercaCiutada(System::String^ correu) {
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Ciutada WHERE correu_electronic = '" + correu + "'";
	MySqlDataReader^ dataReader = con->executar(sql);
	if (dataReader->Read()) {
		System::String^ correu_electronic = dataReader->GetString(0);
		int punts = (int)dataReader->GetInt32(1);
		con->tancarConnexio();
		return gcnew PassarelaCiutada(correu_electronic, punts);
	}
	else {
		throw std::runtime_error("El ciutadà no existeix");
	}

}
