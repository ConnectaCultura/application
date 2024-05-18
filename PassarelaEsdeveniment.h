#pragma once
ref class PassarelaEsdeveniment
{
private:
	System::String^ correu;
	System::String^ nom;
	System::String^ descripcio;
	System::DateTime data_inici;
	System::DateTime data_fi;
	int^ aforament;
	float^ preu;
	System::String^ tipus;


public:
	PassarelaEsdeveniment() {}
	PassarelaEsdeveniment(System::String^ cE, System::String^ n, System::String^ des, System::DateTime data_ini, System::DateTime data_f, int^ afor, float^ p, System::String^ t);
	void insereix();
	void esborra();
	System::String^ obteNom();
	System::DateTime obteData_inici();
	System::DateTime obteData_fi();
	float^ obtePreu();
	int^ obteAforament();
	System::String^ obteDescripcio();
	System::String^ obteCorreu();
	System::String^ obteTipus();

};

