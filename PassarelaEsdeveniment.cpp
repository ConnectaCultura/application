#include "pch.h"
#include "PassarelaEsdeveniment.h"
#include "Sessio.h"
using namespace MySql::Data::MySqlClient;

PassarelaEsdeveniment::PassarelaEsdeveniment(System::String^ cE, System::String^ n, System::String^ des, System::String^ data_ini, System::String^ data_f, int afor, float p, System::String^ t) {
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
	System::String^ sql = "INSERT INTO Esdeveniment VALUES ( '" + nom + "', '" + descripcio + "', '" + data_inici + "', '" + data_fi + "', '" + aforament + "', '" + preu +"', '"+ tipus + "', '" + correu +"')";
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}

System::String^ PassarelaEsdeveniment::obteNom() {
	return nom;
}
System::String^ PassarelaEsdeveniment::obteData_inici() {
	return data_inici;
}
System::String^ PassarelaEsdeveniment::obteData_fi() {
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
