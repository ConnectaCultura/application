#include "pch.h"
#include "PassarelaUsuari.h"

PassarelaUsuari::PassarelaUsuari(System::String^ ceU, System::String^ nU, System::String^ cU, System::String^ tU)
{
	nom = nU;
	correuElectronic = ceU;
	contrasenya = cU;
	tipus = tU;
}

PassarelaUsuari^ PassarelaUsuari::operator=(const PassarelaUsuari^ other) {
	correuElectronic = other->correuElectronic;
	contrasenya = other->contrasenya;
	nom = other->nom;
	tipus = other->tipus;
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

void PassarelaUsuari::insereix() {
	System::String^ sql = "INSERT INTO Usuari VALUES ('" + correuElectronic + "' , '" + nom + "','" + contrasenya + "','" + tipus + "')";
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