#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>

using namespace std;

class Computadora{
    string nombre;
    string sistemaOp;
    string procesador;
    int memoriaRAM;
public:
    Computadora();
    Computadora(const string& nombre, const string& sistemaOp, const string& procesador,int memoriaRAM);

    void setNombre(const std::string &v);
    std::string getNombre();
    void setSistemaOp(const std::string &v);
    std::string getSistemaOp();
    void setProcesador(const std::string &v);
    std::string getProcesador();
    void setMemoriaRAM(int v);
    int getMemoriaRAM();
};



#endif