#pragma once
#include "Connexio.h"
ref class PassarelaValoracio
{
private:
	System::String^ _correuCiutada;
	System::String^ _nomEsdev;
	System::String^ _dataInici;
	System::String^ _dataFi;
	int _puntuacio;
	System::String^ _opinio;

public:
	PassarelaValoracio(System::String^ correuCiutada, System::String^ nomEsdev, System::String^ dataInici, System::String^ dataFi, int puntuacio, System::String^ opinio);
	
	void insereix();
	void esborra();
	System::String^ obteNomEsdev();
	System::String^ obteCorreuCiutada();
	System::String^ obteDataInici();
	System::String^ obteDataFi();
	int obtePuntuacio();
	System::String^ obteOpinio();
};

