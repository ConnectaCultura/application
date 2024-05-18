#include "pch.h"
#include "PassarelaEsdeveniment.h"
#include "Sessio.h"
using namespace MySql::Data::MySqlClient;

PassarelaEsdeveniment::PassarelaEsdeveniment(System::String^ cE, System::String^ n, System::String^ des, System::DateTime data_ini, System::DateTime data_f, int afor, float p, System::String^ t) {
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
	System::String^ sql = "INSERT INTO Esdeveniment VALUES ( '" + nom + "', '" + descripcio + "', '" + data_inici_sql + "', '" + data_fi_sql + "', '" + aforament + "', '" + preu +"', '"+ tipus + "', '" + correu +"')";
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}

void PassarelaEsdeveniment::esborra() {
	/*System::String^ dia = data_inici->Substring(0, 2);
	System::String^ mes = data_inici->Substring(3, 2);
	System::String^ año = data_inici->Substring(6, 4);

	// Construir la nueva cadena con el formato deseado
	System::String^ iniciMySQL = año + "-" + mes + "-" + dia + " 00:00:00";

	System::String^ _dia = data_fi->Substring(0, 2);
	System::String^ _mes = data_fi->Substring(3, 2);
	System::String^ _año = data_fi->Substring(6, 4);
	*/
	// Construir la nueva cadena con el formato deseado
	System::String^ data_inici_sql = data_inici.ToString("yyyy-MM-dd HH:mm:ss");
	System::String^ data_fi_sql = data_fi.ToString("yyyy-MM-dd HH:mm:ss");
	System::String^ sql = "DELETE FROM Esdeveniment WHERE nom='" + nom + "' AND data_inici='" + data_inici_sql + "' AND data_fi='" + data_fi_sql + "'";
	Connexio^ con = Connexio::getInstance();
	//això falla
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
float PassarelaEsdeveniment::obtePreu() {
	return preu;
}

int PassarelaEsdeveniment::obteAforament() {
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
