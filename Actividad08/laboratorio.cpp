#include "laboratorio.h"
#include <fstream>

using namespace std;

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarFinal(const Computadora & c)
{
    if (cont<5){
        arreglo[cont] = c;
        cont++;
    }
    else{
        cout << "Arreglo lleno" << endl;
    }
}

void Laboratorio::mostrar()
{
    cout << left;
    cout << setw(12) << "Nombre";
    cout << setw(12) << "Sistema op";
    cout << setw(12) << "Procesador";
    cout << setw(10) << "GB de RAM" << endl;
    for (size_t i = 0; i < cont; i++)
    {
        Computadora &c = arreglo[i];
        cout << c;
        //cout << "Nombre: " << c.getNombre() << endl;
        //cout << "Sistema operativo: " << c.getSistemaOp() << endl;
        //cout << "Procesador: " << c.getProcesador() << endl;
        //cout << "GB de memoria RAM: " << c.getMemoriaRAM() << endl;
    }

    
    
}

void Laboratorio::respaldar_tabla()
{
    ofstream archivo("Computadoras_tabla.txt");
    if (archivo.is_open()){
        archivo << left;
        archivo << setw(12) << "Nombre";
        archivo << setw(12) << "Sistema op";
        archivo << setw(12) << "Procesador";
        archivo << setw(10) << "GB de RAM" << endl;
        for (size_t i = 0; i < cont; i++)
        {
            Computadora &c = arreglo[i];
            archivo << c;
        }
    }
    archivo.close();
}

void Laboratorio::respaldar()
{
    ofstream archivo("Computadoras.txt");
    if (archivo.is_open())
    {
        for (size_t i = 0; i < cont; i++)
        {
            Computadora &c = arreglo[i];
            archivo << c.getNombre() << endl;
            archivo << c.getSistemaOp() << endl;
            archivo << c.getProcesador() << endl;
            archivo << c.getMemoriaRAM() << endl;
            
        }
    }
    archivo.close();
}