// Evitar doble declaración
#ifndef _MADAME_H
#define _MADAME_H
#include <vector>
#include <iostream>
using namespace std;

class Madame 
{
  //Atributos (estado interno)
  public:
  //Vector de vectores de tipo entero llamado datos
    vector <vector<int>> datos;

  //Métodos (interfaces)
  public:
    //Constructor
    Madame();
    //Destructor
    ~Madame();
    //Método que muestra la matriz
    void imprimirTabla();
};

#endif