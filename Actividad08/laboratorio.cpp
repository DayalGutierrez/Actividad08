#include "laboratorio.h"

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