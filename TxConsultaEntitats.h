#pragma once
#include<string>
#include<iostream>
using namespace std;
ref class TxConsultaEntitats
{
	public:
		TxConsultaEntitats();
		void executar();
		array ObteResultat();
	private:
		System::String^ _ajuntamentPrincipal;
		//List o vector o
		//array<PassarellaEntitat, 100> _llistaEntitats;
	
};

