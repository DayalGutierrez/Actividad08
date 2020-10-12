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

    lab.agregarFinal(compu1);
    lab.agregarFinal(compu2);
    lab.mostrar();

    return 0;
}