/*
Archivo .h de la clase dentista
Autor: Raúl Arcos Martínez
Fecha: 10/06/2024
*/
#include <string>
#include <vector>
#include "Paciente.h"
using namespace std;

class Dentista 
{
    //Atributos de instancia
    private:
    string nombre;
    vector<Paciente> clientes;

    public:
    //Constructor
    Dentista(string nombre);
    void registrarClientes(const Paciente& paciente);
    void consultarCitas();
    void imprimirDentista();
    void imprimirClientes();
    vector<Paciente>& getClientes();
};