/*
metodos  de la clase Citas
Autor: Raúl Arcos Martínez
Fecha: 10/06/2024
*/
#include <string>
#include "Citas.h"
using namespace std;

Citas::Citas(string fecha, string tratamiento, Paciente paciente, Nota nota)
{
    this->fecha = fecha;
    this->tratamiento = tratamiento;
    this->paciente = paciente;
    this->nota = nota;
}

string Citas::getFecha()
{
    return string();
}

void Citas::imprimirCita()
{
    
}

void Citas::obtenerDetalle()
{

}
