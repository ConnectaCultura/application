#pragma once
ref class PassarelaCiutada
{
private:
	System::String^ _correuElectronic;
	System::String^ _ajuntament;

public:
	PassarelaCiutada() {}
	PassarelaCiutada(System::String^ cE, System::String^ aj);
	void insereix();
};

