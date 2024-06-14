/*
metodos  de la clase Citas
Autor: Raúl Arcos Martínez
Fecha: 10/06/2024
*/
#include <string>
#include <iostream>
#include "Citas.h"
using namespace std;

Citas::Citas()
{
    fecha = "00/00/00";
    tratamiento = "sin tratamiento";
}

Citas::Citas(string fecha, string tratamiento)
{
    this->fecha = fecha;
    this->tratamiento = tratamiento;
}

string Citas::getFecha()
{
    return fecha;
}

void Citas::imprimirCita()
{
    cout << "---Cita---" << endl;
    cout << "   " << fecha << "   " << endl;
    cout << "   " << tratamiento << "   " <<endl;
}

void Citas::cancelarCita()
{
    fecha = "00/00/00";
    tratamiento = "cita cancelada";
    
}
