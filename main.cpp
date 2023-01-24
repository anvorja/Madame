//@anvorja
//https://github.com/anvorja

/*
Al parecer ser profesor no es una tarea fácil, eso dice Madame Medina una profesora de matemáticas que debe enseñar las tablas de multiplicar a sus estudiantes de segundo grado. Ella cree haber encontrado la solución al dilema: ¿cómo enseñar a los niños a multiplicar? Para esto definió una tabla que permite obtener los resultados a partir del multiplicando (filas) y el multiplicador (columnas), como se observa en la Figura 1. Tabla que está guardada en un vector de vectores de tipo entero en la clase madame, la cual fue llamada como datos: su definición es <vector <vector>> int datos.
*/

#include "madame.h"
#include "monsieur.h"
#include <iostream>
using namespace std;

int main() {
  Monsieur monsieur;
  Madame madame;

  monsieur.leerDatos(madame);
  monsieur.imprimirTabla(madame);

}