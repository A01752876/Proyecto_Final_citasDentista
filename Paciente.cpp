
/*
Archivo de metodos constructor y atributos de la clase paciente
Autor: Raúl Arcos Martínez
Fecha: 11/06/2024
*/
#include "Paciente.h"
#include "Citas.h"
#include "Notas.h"
#include <iostream>
#include <string>
using namespace std;

Paciente::Paciente(string nombre, string numero)
{
    this-> nombre = nombre;
    this-> numero = numero;
    Citas cita("00/00/00", "-----");
    Notas nota();
    
}



void Paciente::imprimirPaciente()
{
    cout << "---Paciente---"<< endl;
    cout <<"Nombre: " << nombre<<endl;
    cout << "Numero: "<<numero << endl;
}

void Paciente::cancelarCita()
{
    cita.cancelarCita();
}
void Paciente::registrarCita(Citas cita)
{
    this->cita = cita;
}

Citas Paciente::getCita()
{
    return cita;
}

Notas Paciente::getNota()
{
    return nota;
}

string Paciente::getNombre()
{
    return nombre;
}
