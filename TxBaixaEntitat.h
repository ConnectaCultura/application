#pragma once
#include "PassarelaEntitat.h"
#include "PassarelaUsuari.h"
#include "TxConsultaEsdeveniments.h"
#include "Sessio.h"
#include <stdexcept>

ref class TxBaixaEntitat
{
public:

    TxBaixaEntitat();
    TxBaixaEntitat(System::String^ contrasenya);

    void executar();

private:
    System::String^ _contrasenya;

};

