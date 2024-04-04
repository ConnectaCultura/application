#pragma once

#include "CercadoraUsuari.h"
#include "Sessio.h"
ref class TxLogIn
{
public:
    TxLogIn(System::String^ correu, System::String^ contrasenya);
    void executar();
private:
    System::String^ _correu;
    System::String^ _contrasenya;
};

