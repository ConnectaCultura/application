#pragma once

#include "CercadoraFavorita.h"
#include "PassarelaFavorita.h"
#include "Sessio.h"
#include <list> 
#include <stdexcept>

ref class TxAfegirFavorita
{
public:
    TxAfegirFavorita(System::String^ correuE);

    void executar();
    List<System::String^>^ obteResultat();

private:
    List<System::String^>^ _resultat;
    System::String^ _correuE;
};

