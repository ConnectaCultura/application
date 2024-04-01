#pragma once
ref class PassarelaUsuari
{

private:
	System::String^ nom;
	System::String^ correuElectronic;
	System::String^ contrasenya;
	System::String^ tipus;

public:
	PassarelaUsuari(System::String^ nU, System::String^ ceU, System::String^ cU, System::String^ tU);
	PassarelaUsuari^ operator=(const PassarelaUsuari^ other);
	System::String^ obteCorreuElectronic();
	System::String^ obteContrasenya();
	System::String^ obteNom();
	System::String^ obteTipus();
};

