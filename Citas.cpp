/*
metodos  de la clase Citas
Autor: Raúl Arcos Martínez
Fecha: 10/06/2024
*/
#include <string>
#include <iostream>
#include "Citas.h"
using namespace std;

Citas::Citas(string fecha, string tratamiento, Paciente paciente,)
{
    this->fecha = fecha;
    this->tratamiento = tratamiento;
    this->paciente = paciente;
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
    cout << paciente.imprimirPaciente() << endl;
}

void Citas::cancelarCita()
{
    fecha: "00/00/00"
    tratamineto = "cita cancelada"
    
}
