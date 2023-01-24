#include "madame.h"
#include <iostream>
#include <vector>
using namespace std;

// Constructor
// para inicializar atributos de la clase Madame
Madame::Madame() {
  // Matriz de datos
  datos.resize(10);
  for (int i = 0; i < 10; i++) {
    datos[i].resize(10);
  }

  // Recorrer la matriz
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      datos[i][j] = (i + 1) * (j + 1);
    }
  }
}

Madame::~Madame() {}

void Madame::imprimirTabla() {
  // Ciclo anidado
  //este no se usará solo es para ver cómo nos queda la matriz
  //generada en el constructor Madame()
  // for (int i = 0; i < 10; i++) {
  //   for (int j = 0; j < 10; j++) {
  //     cout << datos[i][j] << "\t";
  //   }
  //   cout << endl;
  // }
}