
/*
Archivo de metodos constructor y atributos de la clase paciente
Autor: Raúl Arcos Martínez
Fecha: 11/06/2024
*/
#include "Paciente.h"
#include <iostream>
#include <string>
using namespace std;

Paciente::Paciente()
{
    nombre = " ";
    numero = " ";
}
Paciente::Paciente(string nombre, string numero)
{
    this-> nombre = nombre;
    this-> numero = numero;
}

void Paciente::setTelefono(string telefono)
{
    this->numero = telefono;
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
void Paciente::registrarCita(string fecha, string tratamiento)
{
    Citas cita (fecha, tratamiento);
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

void Paciente::setNombre(string nombre)
{
    this->nombre=nombre;
}
