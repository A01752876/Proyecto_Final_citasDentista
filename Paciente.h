/*
Archivo .h de la clase paciente
Autor: Raúl Arcos Martínez
Fecha: 09/06/2024
*/
#include <string>
#include <vector>
#include "Citas.h"
#include "Notas.h"
using namespace std;

class Paciente
{
    //Atributos de Instancia
    private:
    string nombre;
    string numero;
    Citas cita;
    Notas nota;

    
    public:
    //Constructor
    Paciente(string nombre, string numero);
    //Metodos
    void registrarCita(Citas cita);
    Citas getCita();
    Notas getNota();
    string getNombre();
    void imprimirPaciente();
    void cancelarCita();

};
