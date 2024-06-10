/*
Archivo .h de la clase Citas
Autor: Raúl Arcos Martínez
Fecha: 09/06/2024
*/
#include <string>
#include "Notas.h"
#include "Paciente.h"
using namespace std;

class Citas
{
    //Atributos de instancia
    private:
    string fecha;
    string tratatmiento;
    Paciente paciente;
    Nota nota;

    public:
    //Constructor
    Citas(string fecha,string tratamiento, Paciente paciente, Nota nota);
    //Metodos
    string getFecha();
    void imprimirCita();
    void obtenerDetalle();
    
};