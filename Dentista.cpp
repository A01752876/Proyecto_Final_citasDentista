/*
archivo cpp de la clase dentista
Autor: Raúl Arcos Martínez
Fecha: 11/06/2024
*/
#include <string>
#include <vector>
#include <iostream>
#include "Dentista.h"
using namespace std;

Dentista::Dentista(string nombre)
{
    this->nombre:nombre

}

void Dentista::registrarClientes(const Paciente& paciente)
{
    clientes.push_back(paciente);
}

void Dentista::consultarCitas(string fecha)
{
    cout << "¿Que fecha gusta consultar? dd/mm/aa: " <<endl;
    cin >> fecha_aconsultar;

    //for que recorra arreglo de los clientes, despues haga un getCita y despues un get fecha

}
