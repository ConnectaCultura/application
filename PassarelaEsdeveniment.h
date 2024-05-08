#pragma once
ref class PassarelaEsdeveniment
{
private:
	System::String^ correu;
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
	System::String^ obteNom();
	System::String^ obteData_inici();
	System::String^ obteData_fi();
	float obtePreu();
	int obteAforament();
	System::String^ obteDescripcio();
	System::String^ obteCorreu();
	System::String^ obteTipus();

};

