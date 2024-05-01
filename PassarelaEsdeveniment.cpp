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

