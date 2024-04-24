#include "pch.h"
#include "Sessio.h"

PassarelaUsuari^ Sessio::obteUsuari() {
    return usuari;
}

void Sessio::iniciaSessio(PassarelaUsuari^ u) {
    usuari = u;
}

void Sessio::tancaSessio() {
    usuari = nullptr;
}

void Sessio::refrescaUsuari(PassarelaUsuari^ u)
{
    usuari = u;
}