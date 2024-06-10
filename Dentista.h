/*
Archivo .h de la clase paciente
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
    vector<Pacientes> clientes;

    public:
    //Constructor
    Dentista(string nombre);
    void registrarClientes(Paciente paciente);
    void consultarCitas(string fecha);
};