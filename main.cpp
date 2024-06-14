/*
Implementación de las clases Dentitsta, Notas, Citas y Paciente
Autor: Raúl Arcos Martínez
Fecha: 12/06/2024
*/
#include <string>
#include <vector>
#include <iostream>
#include "Dentista.h"
using namespace std;

int main(int argc, char const *argv[])
{
    string nombre_dentista;
    cout << "Bienvenido al consultorio, indicar el nombre del dentista: " << endl;
    getline(cin, nombre_dentista);
    Dentista dentista(nombre_dentista); // se debe de enviar el vector tambien?
    dentista.imprimirDentista();

    
    //declaracion de constantes
    string nombre_paciente;
    string telefono;
    string fecha;
    string tratamiento;
    int cliente_seleccionado;
    string opcion_nota;
    vector<Paciente>& clientes = dentista.getClientes(); //obtenemos el get para poder modificarlo posteriormente
    int opcion = 0;

    while(opcion!=6)
    {
        //Ciclo del menu
        cout << "¿Que desea hacer?" << endl; 
        cout << "[1] Registrar Clientes" << endl;
        cout << "[2] Registrar Citas" << endl;
        cout << "[3] Cancelar Citas" << endl;
        cout << "[4] Consultar Citas" << endl;
        cout << "[5] Notas" << endl;
        cout << "[6] Salir" << endl;
        cout << " " << endl;
        cin >> opcion;

        if(opcion==1) 
        {
            cout << "Nombre del paciente: " << endl;
            cin >> nombre_paciente;
            cout << "Número telefonico del paciente:" << endl;
            cin >> telefono;
            //Paciente paciente(nombre_paciente, telefono);
            dentista.registrarClientes(nombre_paciente, telefono); //crear paciente dentro de registrar
            
        }

        else if(opcion==2)
        {
            
            cout<<"Escoja el paciente al que se le añadirá una cita: " << endl;
            //vector<Paciente>& clientes = dentista.getClientes(); //preguntar del get clientes

            dentista.imprimirClientes();
            cin >> cliente_seleccionado;

            cout << "Fecha de la cita (dd/mm/aa) : " << endl;
            cin >> fecha;
            cout << "Tratamiento que recibirá: " << endl;
            cin >> tratamiento;

            clientes[cliente_seleccionado-1].registrarCita(fecha, tratamiento);
            
            
        }
        
        else if(opcion==3)
        {
            cout<<"Escoja el paciente al que se le cancelará la cita: " << endl;
            dentista.imprimirClientes();
            cin >> cliente_seleccionado;

            clientes[cliente_seleccionado-1].cancelarCita();
            
        }
        else if(opcion==4)
        {
            dentista.consultarCitas();
            
        }

        else if(opcion==5)
        {
             cout<<"Escoja el paciente al que se le añadirá una nota o revisará la nota: " << endl;

            dentista.imprimirClientes();
            cin >> cliente_seleccionado;
           
            
            cout << "Desea añadir una nota [n], o ver la nota [s]" << endl;
            cin >> opcion_nota;

            if(opcion_nota== "n")
            {
                cin.ignore();
                clientes[cliente_seleccionado-1].getNota().escribirNota();
                cout << endl;
            }

            else if(opcion_nota == "s")
            {
                clientes[cliente_seleccionado-1].getNota().imprimirNota();
                cout << endl;
            }
            else
            {
                cout << "Opción invalida" << endl;
            }
            
        }
        else
        {
            cout << "Opción invalida" << endl;
        }


        
    }

    cout<< "Buen día" <<endl;
    return 0;
}
