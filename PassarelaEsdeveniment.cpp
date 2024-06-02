#include "pch.h"
#include "PassarelaEsdeveniment.h"
#include "Sessio.h"
using namespace MySql::Data::MySqlClient;

PassarelaEsdeveniment::PassarelaEsdeveniment(System::String^ cE, System::String^ n, System::String^ des, System::DateTime data_ini, System::DateTime data_f, int^ afor, System::String^ p, System::String^ t) {
	correu = cE;
	nom = n;
	descripcio = des;
	data_inici = data_ini;
	data_fi = data_f;
	aforament = afor;
	preu = p;
	tipus = t;
}

void PassarelaEsdeveniment::insereix() {
	System::String^ data_inici_sql = data_inici.ToString("yyyy-MM-dd HH:mm:ss");
	System::String^ data_fi_sql = data_fi.ToString("yyyy-MM-dd HH:mm:ss");
	System::String^ sql;
	if (aforament != nullptr) {
		sql = "INSERT INTO Esdeveniment VALUES ( '" + nom + "', '" + descripcio + "', '" + data_inici_sql + "', '" + data_fi_sql + "', '" + aforament + "', '" + preu + "', '" + tipus + "', '" + correu + "')";
	}
	else {
		sql = "INSERT INTO Esdeveniment VALUES ( '" + nom + "', '" + descripcio + "', '" + data_inici_sql + "', '" + data_fi_sql + "', NULL, NULL, '" + tipus + "', '" + correu + "')";

	}
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}

void PassarelaEsdeveniment::esborra() {
	System::String^ data_inici_sql = data_inici.ToString("yyyy-MM-dd HH:mm:ss");
	System::String^ data_fi_sql = data_fi.ToString("yyyy-MM-dd HH:mm:ss");
	System::String^ sql = "DELETE FROM Esdeveniment WHERE nom='" + nom + "' AND data_inici='" + data_inici_sql + "' AND data_fi='" + data_fi_sql + "'";
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}

System::String^ PassarelaEsdeveniment::obteNom() {
	return nom;
}
System::DateTime PassarelaEsdeveniment::obteData_inici() {
	return data_inici;
}
System::DateTime PassarelaEsdeveniment::obteData_fi() {
	return data_fi;
}
System::String^ PassarelaEsdeveniment::obtePreu() {
	return preu;
}

int^ PassarelaEsdeveniment::obteAforament() {
	return aforament;
}

System::String^ PassarelaEsdeveniment::obteDescripcio() {
	return descripcio;
}

System::String^ PassarelaEsdeveniment::obteCorreu() {
	return correu;
}

System::String^ PassarelaEsdeveniment::obteTipus() {
	return tipus;
}

void PassarelaEsdeveniment::setPreu(System::String^ p) {
	preu = p;
}
void PassarelaEsdeveniment::setDescripcio(System::String^ p) {
	descripcio = p;
}
void PassarelaEsdeveniment::setTipus(System::String^ p) {
	tipus = p;
}
void PassarelaEsdeveniment::modifica() {
	descripcio = descripcio->Replace("'", "\\'");
	System::String^ data_inici_sql = data_inici.ToString("yyyy-MM-dd HH:mm:ss");
	System::String^ data_fi_sql = data_fi.ToString("yyyy-MM-dd HH:mm:ss");
	System::String^ sql;
	if(preu!=nullptr) sql = "UPDATE Esdeveniment SET preu = '" + preu + "', modalitat= '" + tipus + "', descripcio= '" + descripcio + "' WHERE nom = '" + nom + "' AND data_inici = '" + data_inici_sql + "' AND data_fi ='" + data_fi_sql + "';";
	else sql = "UPDATE Esdeveniment SET preu = NULL, modalitat= '" + tipus + "', descripcio= '" + descripcio + "' WHERE nom = '" + nom + "' AND data_inici = '" + data_inici_sql + "' AND data_fi ='" + data_fi_sql + "';";
	
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}