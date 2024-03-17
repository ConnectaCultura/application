#pragma once
ref class PassarelaEntitat
{
private:
	System::String^ _correuElectronic;
	System::String^ _descripcio;
	System::String^ _tipus;

public:
	PassarelaEntitat() {}
	PassarelaEntitat(System::String^ cE, System::String^ des,System::String^ t);
	void insereix();
};

