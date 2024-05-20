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
		System::String^ _quantitat;

	public:
		PassarelaCompra() {}
		PassarelaCompra(System::String^ correuCiutada, System::String^ nomEsdev, System::String^ dataInici, System::String^ dataFi, System::String^ preuEntrada, System::String^ quantitat);
		~PassarelaCompra(){}

		System::String^ obteNomEsdev();
		System::String^ obteCorreuCiutada();
		System::String^ obteDataInici();
		System::String^ obteDataFi();
		System::String^ obtePreu();
		System::String^ obteQuantitat();

		void insereix();
		void esborra();
};
