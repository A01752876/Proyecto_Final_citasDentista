
/*
Archivo de metodos constructor y atributos de la clase paciente
Autor: Raúl Arcos Martínez
Fecha: 11/06/2024
*/
#include "Paciente.h"
#include "Citas.h"
#include <iostream>
#include <string>
using namespace std;

Paciente::Paciente(string nombre, string numero, Citas cita)
{
    this-> nombre = nombre;
    this-> numero = numero;
    this-> cita = cita;
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
