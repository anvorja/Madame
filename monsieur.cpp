#include "madame.h"
#include "monsieur.h"
#include <iostream>
#include <vector>
using namespace std;

Monsieur::Monsieur() {}

Monsieur::~Monsieur() {}

// Cargar los datos de un objeto de la clase madame y sumarle 1
void Monsieur::leerDatos(Madame &madame) {
  // Ciclo anidado
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      madame.datos[i][j] = madame.datos[i][j] + 1;
    }
  }
}

// Invertir la matriz e imprimir solo el triángulo superior
void Monsieur::imprimirTabla(Madame &madame) {
  // Ciclo anidado
  for (int i = 9; i > 0; i--) {
    for (int j = 9; j > 0; j--) {
      if (i >= j) {
        cout << madame.datos[i][j] << "\t";
      } else {
        cout << "\t";
      }
    }
    cout << endl;
  }
}