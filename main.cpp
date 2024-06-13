/*
Implementación de las clases Dentitsta, Notas, Citas y Paciente
Autor: Raúl Arcos Martínez
Fecha: 12/06/2024
*/
#include <string>
#include <vector>
#include <iostream>
#include "Dentista.h"
#include "Paciente.h"
#include "Citas.h"
#include "Notas.h"
using namespace std;

int main(int argc, char const *argv[])
{
    string nombre_dentista;
    cout << "Bienvenido al consultorio, indicar el nombre del dentista: " << endl;
    cin >> nombre_dentista ;
    Dentista dentista(nombre_dentista); // se debe de enviar el vector tambien?
    dentista.imprimirDentista();

    //Ciclo del menu

    cout << "¿Que desea hacer?" << endl; 
    cout << "[1] Registrar Clientes" << endl;
    cout << "[2] Registrar Citas" << endl;
    cout << "[3] Cancelar Citas" << endl;
    cout << "[4] Consultar Citas" << endl;
    cout << "[0] Salir"
    cin >> opcion;

    switch(opcion)
    {
        case 1:
            string nombre_paciente;
            string telefono;
            cout << "Nombre del paciente: " << endl;
            cin >> nombre_paciente;
            cout << "Número telefonico del paciente:" << endl;
            cin >> telefono;
            Paciente paciente(nombre_paciente, telefono);
            dentista.registrarClientes(paciente);
            break;

        case 2:
            cout<<"Escoja el paciente al que se le añadirá una cita: " << endl;
            vector<Paciente>& clientes = dentista.getClientes();
            cout << "Lista de Pacientes: " << endl;
            for (size_t i =0; i + 1 << clientes.size(); i++)
            {
                cout << i + 1 << ". " << clientes[i].getNombre();
            }
            cout<< endl;

            size_t cliente_seleccionado;
            cin >> cliente_seleccionado;
            --cliente_seleccionado;

            string fecha;
            string tratamiento;
            cout << "Fecha de la cita (dd/mm/aa) : " << endl;
            cin >> fecha;
            cout << "Tratamiento que recibirá: " << endl;
            cin >> tratamiento;
            Citas cita(fecha, tratamiento);
            clientes[cliente_seleccionado].registrarCita(cita);

            
            break;
        case 3:
            
            break;
        case 4:
            
            break;
        case 0:
            cout << "¡Buen día!" << endl;
            break;
    }


    return 0;
}
