#include "pch.h"
#include "PassarelaUsuari.h"

PassarelaUsuari::PassarelaUsuari(System::String^ nU, System::String^ ceU, System::String^ cU, System::String^ tU, int act)
{
	nom = nU;
	correuElectronic = ceU;
	contrasenya = cU;
	tipus = tU;
	actiu = act;
}

PassarelaUsuari^ PassarelaUsuari::operator=(const PassarelaUsuari^ other) {
	correuElectronic = other->correuElectronic;
	contrasenya = other->contrasenya;
	nom = other->nom;
	tipus = other->tipus;
	actiu = other->actiu;
	return this;
}

System::String^ PassarelaUsuari::obteCorreuElectronic()
{
	return this->correuElectronic;
}

System::String^ PassarelaUsuari::obteContrasenya()
{
	return this->contrasenya;
}

System::String^ PassarelaUsuari::obteNom()
{
	return this->nom;
}

System::String^ PassarelaUsuari::obteTipus()
{
	return this->tipus;
}
int PassarelaUsuari::obteActiu() {
	return this->actiu;
}

void PassarelaUsuari::setInactiu() {
	this->actiu = 0;
}
void PassarelaUsuari::modificaNom(System::String^ nom)
{
	this->nom = nom;
}

void PassarelaUsuari::insereix() {
	//System::String^ sql = "INSERT INTO Usuari VALUES ('" + correuElectronic + "' , '" + nom + "','" + contrasenya + "','" + tipus + "')";
	System::String^ sql = "INSERT INTO Usuari (nom, contrasenya, tipus, correu_electronic) VALUES ('" + nom + "' , '" + contrasenya + "','" + tipus + "','" + correuElectronic + "')";
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}

void PassarelaUsuari::esborra() {
	System::String^ sql = "DELETE FROM Usuari WHERE correu_electronic='" + correuElectronic + "';";
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}

void PassarelaUsuari::modifica() {
	System::String^ sql = "UPDATE Usuari SET nom = '" + nom + "', actiu = '" + actiu + "' WHERE correu_electronic = '" + correuElectronic + "';";
	Connexio^ con = Connexio::getInstance();
	MySqlDataReader^ dataReader = con->executar(sql);
	con->tancarConnexio();
}