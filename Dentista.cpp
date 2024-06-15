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
    //vector<Paciente> clientes(); //preguntar de la declaración

}

void Dentista::registrarClientes(string nombre, string numero)
{
    Paciente paciente(nombre,numero);
    clientes.push_back(paciente);
}

void Dentista::consultarCitas()
{
    string fecha_aconsultar;
    cout << "¿Que fecha gusta consultar? dd/mm/aa: " << endl;
    cin >> fecha_aconsultar;
    
    bool citasEncontradas = false;
    for (auto cliente: clientes)
    {
        if(cliente.getCita().getFecha() == fecha_aconsultar) //preguntar 
        {
            cliente.getCita().imprimirCita();
            citasEncontradas = true;
        }
        if(!citasEncontradas) 
        {
            cout << "Sin citas el día de hoy" << endl;
        }
        
    }
    
}

void Dentista::imprimirDentista()
{
    cout << nombre;
}

void Dentista::imprimirClientes()
{
    int numero_cliente = 1;
    cout << "Lista de Pacientes: " << endl;
    //size_t i =0; i + 1 << clientes.size(); i++
    for (auto cliente : clientes)
            {
                cout <<numero_cliente<< ". " << cliente.getNombre() << endl;
                numero_cliente += 1;
            }
            cout<< endl;
}

vector<Paciente> &Dentista::getClientes()
{
    return clientes;
}
