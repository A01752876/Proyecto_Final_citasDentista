/*
Archivo .h de la clase dentista
Autor: Raúl Arcos Martínez
Fecha: 10/06/2024
*/
#include <string>
#include <vector>
#include "Paciente.h"
using namespace std;
#ifndef _Dentista_h
#define _Dentista_h

class Dentista 
{
    //Atributos de instancia
    private:
    string nombre;
    vector<Paciente> clientes;

    public:
    //Constructor
    Dentista(string nombre);
    void registrarClientes(string nombre, string numero);
    void consultarCitas();
    void imprimirDentista();
    void imprimirClientes();
    vector<Paciente>& getClientes();
};
#endif