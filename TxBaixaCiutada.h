#pragma once
#include "PassarelaCiutada.h"
#include "PassarelaUsuari.h"
#include "Sessio.h"
#include <stdexcept>

ref class TxBaixaCiutada
{
public:

    TxBaixaCiutada();
    TxBaixaCiutada(System::String^ contrasenya);

    void executar();

private:
    System::String^ _contrasenya;
};
