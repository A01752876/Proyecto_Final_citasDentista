/*
Metodos de la clase Notas
Autor: Raúl Arcos Martínez
Fecha: 10/06/2024
*/
#include <string>
#include "Notas.h"
using namespace std;

Notas::Notas()
{
    nota = "--Sin comentarios en la cita--";
}

void Notas::escribirNota(string nota)
{
    this->nota = nota;
}

void Notas::imprimirNota()
{
    cout << nota << endl;
}
