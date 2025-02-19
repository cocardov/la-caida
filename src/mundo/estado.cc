#include "estado.hh"

static const estado estadoGlobal = estado();

void estado::morir()
{
    if (this->salud <= 0)
    {
        this->muerto = true;
    }
}

void estado::actualizarSalud(int nuevaSalud)
{
    this->salud = nuevaSalud + this->salud;

    if (this->salud > 100)
    {
        this->salud = 100;
        return;
    }

    if (this->salud <= 0)
    {
        this->morir();
        return;
    }
}