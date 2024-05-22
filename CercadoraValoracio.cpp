#include "pch.h"
#include "CercadoraValoracio.h"


PassarelaValoracio^ CercadoraValoracio::CercaValoracio(System::String^ Ciutada, System::String^ esdeveniment, System::String^ inici, System::String^ fi) {
	DateTime iniciDateTime = DateTime::Parse(inici);
	DateTime fiDateTime = DateTime::Parse(fi);

	System::String^ data_inici_sql = iniciDateTime.ToString("yyyy-MM-dd HH:mm:ss");
	System::String^ data_fi_sql = fiDateTime.ToString("yyyy-MM-dd HH:mm:ss");

	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Valoracio WHERE correuciutada = '" + Ciutada + "'&& nomesdev = '" + esdeveniment + "' && datainici ='" + data_inici_sql + "' && datafi = '" + data_fi_sql + "';";
	MySqlDataReader^ dataReader = con->executar(sql);
	if (dataReader->Read()) {
		System::String^ correuCiu = dataReader->GetString(0);
		System::String^ esdeve = dataReader->GetString(1);
		System::String^ dataini = dataReader->GetString(2);
		System::String^ datafi = dataReader->GetString(3);
		int puntuacio = dataReader->GetInt32(4);
		System::String^ opinio = dataReader->GetString(5);
		con->tancarConnexio();
		return gcnew PassarelaValoracio(correuCiu, esdeve, dataini, datafi, puntuacio, opinio);
	}
	else {
		throw std::runtime_error("La valoracio no existeix");
	}
}
List<PassarelaValoracio^>^ CercadoraValoracio::CercaPerEsdeveniment(System::String^ esdeveniment, System::String^ inici, System::String^ fi) {
	DateTime iniciDateTime = DateTime::Parse(inici);
	DateTime fiDateTime = DateTime::Parse(fi);
	System::String^ data_inici_sql = iniciDateTime.ToString("yyyy-MM-dd HH:mm:ss");
	System::String^ data_fi_sql = fiDateTime.ToString("yyyy-MM-dd HH:mm:ss");
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Valoracio WHERE nomesdev= '"+ esdeveniment +"' && datainici = '"+ data_inici_sql + "' && datafi = '"+ data_fi_sql+ "';";
	MySqlDataReader^ dataReader = con->executar(sql);
	List<PassarelaValoracio^>^ vt = gcnew List<PassarelaValoracio^>();
	while (dataReader->Read()) {
		// Agafarem les columnes per índex, la primera és la 0
		System::String^ correu = dataReader->GetString(0);
		System::String^ nom = dataReader->GetString(1);
		System::String^ dataini = dataReader->GetString(2);
		System::String^ datafi = dataReader->GetString(3);
		int puntuacio = dataReader->GetInt32(4);
		System::String^ opinio = dataReader->GetString(5);
		vt->Add(gcnew PassarelaValoracio (correu, nom, dataini, datafi, puntuacio, opinio));
	}
	con->tancarConnexio();
	return vt;
}
List<PassarelaValoracio^>^ CercadoraValoracio::CercaPerCiutada(System::String^ ciutada) {
	Connexio^ con = Connexio::getInstance();
	System::String^ sql = "SELECT * FROM Valoracio WHERE correuciutada = '" + ciutada +"'";
	MySqlDataReader^ dataReader = con->executar(sql);
	List<PassarelaValoracio^>^ vt = gcnew List<PassarelaValoracio^>();
	while (dataReader->Read()) {
		System::String^ correu = dataReader->GetString(0);
		System::String^ nom = dataReader->GetString(1);
		System::String^ dataini = dataReader->GetString(2);
		System::String^ datafi = dataReader->GetString(3);
		int puntuacio = dataReader->GetInt32(4);
		System::String^ opinio = dataReader->GetString(5);
		vt->Add(gcnew PassarelaValoracio(correu, nom, dataini, datafi, puntuacio, opinio));
	}
	con->tancarConnexio();
	return vt;
}
