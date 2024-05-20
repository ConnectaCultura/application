#pragma once
#include "CercadoraCompra.h"

ref class TxExisteixCompra
{
public:
	TxExisteixCompra(System::String^ cU, System::String^ nom, System::String^ inici, System::String^ fi);
	void executar();
	bool obteResultat();
private:
	bool _resultat;
	System::String^ _correuU;
	System::String^ _nom;
	System::String^ _inici;
	System::String^ _fi;
};

