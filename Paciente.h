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
    string tratamiento;
    vector<Citas> cita;
    
    public:
    //Constructor
    Paciente(string nombre, string numero, string tratamiento, Citas cita);
    //Metodos
    void imprimirPaciente();
    void registrarCita(const $Cita cita);
    void cancelarCita();

};
