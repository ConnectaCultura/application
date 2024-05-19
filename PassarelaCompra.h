#pragma once
#include "Connexio.h"

ref class PassarelaCompra
{
	private:
		System::String^ _correuCiutada;
		System::String^ _nomEsdev;
		System::String^ _dataInici;
		System::String^ _dataFi;
		System::String^ _preuEntrada;

	public:
		PassarelaCompra() {}
		PassarelaCompra(System::String^ correuCiutada, System::String^ nomEsdev, System::String^ dataInici, System::String^ dataFi, System::String^ preuEntrada);
		~PassarelaCompra(){}

		System::String^ obtePreu();
		System::String^ obteNomEsdev();
		System::String^ obteCorreuCiutada();
		System::String^ obteDataInici();
		System::String^ obteDataFi();

		void insereix();
		void esborra();
};
