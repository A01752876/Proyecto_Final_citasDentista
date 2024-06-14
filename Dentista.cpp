/*
archivo cpp de la clase dentista
Autor: Raúl Arcos Martínez
Fecha: 11/06/2024
*/
#include <string>
#include <vector>
#include <iostream>
#include "Dentista.h"
#include "Paciente.h"
#include "Citas.h"
using namespace std;

Dentista::Dentista(string nombre)
{
    this->nombre = nombre;
    vector<Paciente> clientes(); //preguntar de la declaración

}

void Dentista::registrarClientes(const Paciente& paciente)
{
    clientes.push_back(paciente);
}

void Dentista::consultarCitas()
{
    string fecha_aconsultar;
    cout << "¿Que fecha gusta consultar? dd/mm/aa: " << endl;
    cin >> fecha_aconsultar;

    for (auto cliente: clientes)
    {
        if(cliente.getCita().getFecha() == fecha_aconsultar) //preguntar 
        {
            cliente.getCita().imprimirCita();
        }
        
    }
    
}

void Dentista::imprimirDentista()
{
    cout << nombre;
}

void Dentista::imprimirClientes()
{
    cout << "Lista de Pacientes: " << endl;
    for (size_t i =0; i + 1 << clientes.size(); i++)
            {
                cout << i + 1 << ". " << clientes[i].getNombre();
            }
            cout<< endl;
}

vector<Paciente> &Dentista::getClientes()
{
    return clientes;
}
