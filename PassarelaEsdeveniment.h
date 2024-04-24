#pragma once
ref class PassarelaEsdeveniment
{
private:
	System::String^ correu_entitat;
	System::String^ nom;
	System::String^ descripcio;
	System::String^ data_inici;
	System::String^ data_fi;
	int aforament;
	float preu;
	System::String^ tipus;


public:
	PassarelaEsdeveniment() {}
	PassarelaEsdeveniment(System::String^ cE, System::String^ n, System::String^ des, System::String^ data_ini, System::String^ data_f, int afor, float p, System::String^ t);
	void insereix();
};

