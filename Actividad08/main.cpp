#include <iostream>

#include "laboratorio.h"

using namespace std;

int main(){
    Computadora compu1 = Computadora("Dayal","Windows","Intel",8);
    Computadora compu2;

    compu2.setNombre("Gutierrez");
    compu2.setSistemaOp("Linux");
    compu2.setProcesador("Ryzen");
    compu2.setMemoriaRAM(16);

    Laboratorio lab;

    //lab.agregarFinal(compu1);
    //lab.agregarFinal(compu2);

    lab << compu1 << compu2;

    Computadora compu3;
    cin >> compu3;
    lab << compu3;

    lab.mostrar();
    lab.respaldar_tabla();
    lab.respaldar();

    //cout << compu1;

    return 0;
}