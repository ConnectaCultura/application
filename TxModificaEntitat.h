#pragma once
#include "PassarelaUsuari.h"
#include "CercadoraEntitat.h"

ref class TxModificaEntitat
{
	private:
		System::String^ _nom;
		System::String^ _descripcio;
		System::String^ _tipus;
		PassarelaUsuari^ _user;

	public:
		TxModificaEntitat(System::String^ nom, System::String^ descripcio, System::String^ tipus, PassarelaUsuari^ u);
		void executar();
};

