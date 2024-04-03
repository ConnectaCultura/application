#pragma once
#include "PassarelaUsuari.h"

ref class TxModificaEntitat
{
	private:
		System::String^ _nom;
		System::String^ _descripcio;
		System::String^ _tipus;
		System::String^ _correuAntic;

	public:
		TxModificaEntitat(System::String^ nom, System::String^ descripcio, System::String^ tipus, PassarelaUsuari^ u);
		void executar();
};

