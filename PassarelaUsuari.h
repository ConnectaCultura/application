#pragma once
ref class PassarelaUsuari
{
private:
	System::String^ _nom;
	System::String^ _correuElectronic;
	System::String^ _contrasenya;
	System::String^ _tipus;

public:
	PassarelaUsuari() {}
	PassarelaUsuari(System::String^ nom, System::String^ ceU, System::String^ cU, System::String^ t);
	void insereix();
	void esborra();


	System::String^ obteContrasenya();
};