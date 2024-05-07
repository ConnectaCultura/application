#pragma once
#include "CercadoraUsuari.h"
#include "CercadoraCiutada.h"
#include "Sessio.h"
#include <list> 
#include <stdexcept>

ref class TxConsultaPerfil
{
public:
    TxConsultaPerfil();

    void executar();
    List<System::String^>^ obteResultat();

private:
    List<System::String^>^ _resultat;
};

