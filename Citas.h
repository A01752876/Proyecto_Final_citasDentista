/*
Archivo .h de la clase Citas
Autor: Raúl Arcos Martínez
Fecha: 09/06/2024
*/
#include <string>
using namespace std;

class Citas
{
    //Atributos de instancia
    private:
    string fecha;
    string tratamiento;

    public:
    //Constructor
    Citas(string fecha,string tratamiento);
    //Metodos
    string getFecha();
    
    void imprimirCita();
    void cancelarCita();
    
};