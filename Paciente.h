/*
Archivo .h de la clase paciente
Autor: Raúl Arcos Martínez
Fecha: 09/06/2024
*/
#include <string>
#include <vector>
#include "Citas.h"
using namespace std;

class Paciente
{
    //Atributos de Instancia
    private:
    string nombre;
    string numero;
    Citas cita;
    //vector<Citas> cita;
    
    public:
    //Constructor
    Paciente(string nombre, string numero, Citas cita);
    //Metodos
    void registrarCita(Cita cita);
    void getCita();
    void imprimirPaciente();
    void cancelarCita();

};
