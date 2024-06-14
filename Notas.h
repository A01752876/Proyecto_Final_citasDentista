/*
Archivo .h de la clase Notas
Autor: Raúl Arcos Martínez
Fecha: 09/06/2024
*/
#include <string>
#include "Citas.h"
using namespace std;
class Notas
{
    //Atributos de instancia
    private:
    string nota;

    //Metodos
    public:
    //Constructores
    Notas();
    //Metodos
    void escribirNota();
    void imprimirNota();

};