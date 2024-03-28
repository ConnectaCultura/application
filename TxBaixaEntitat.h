#pragma once
#include "PassarelaEntitat.h"
#include "PassarelaUsuari.h"
#include <stdexcept>

ref class TxBaixaEntitat
{
public:

    TxBaixaEntitat();
    TxBaixaEntitat(System::String^ contrasenya);
    ~TxBaixaEntitat();

    void executar();

private:
    System::String^ _contrasenya;
};

