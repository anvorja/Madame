// Evitar la doble declaración
#ifndef _MONSIEUR_H
#define _MONSIEUR_H
#include "madame.h"
#include <iostream>
using namespace std;

class Monsieur 
{
  //Atributos (estado interno)
  private:

  // Métodos
  public:
    //Constructor
    Monsieur();
    //Destructor
    ~Monsieur();
    void leerDatos(Madame &madame);
    void imprimirTabla(Madame &madame);
};

#endif