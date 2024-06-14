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
#ifndef _Paciente_h
#define _Paciente_h

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
    Paciente();
    //Metodos
    void registrarCita(string fecha, string tratamiento);
    Citas getCita();
    Notas getNota();
    string getNombre();
    void setNombre(string nombre);
    void setTelefono(string telefono);
    void imprimirPaciente();
    void cancelarCita();

};
#endif
