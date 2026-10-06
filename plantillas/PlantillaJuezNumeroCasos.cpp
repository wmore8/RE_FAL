// =========================================================
// PLANTILLA: Numero de casos determinado al inicio
// Asignatura: Fundamentos de la Algoritmia (FAL)
// =========================================================

#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>

// Funcion que resuelve el problema mediante la tecnica del tema
// (Iterativos, Divide y Venceras, Programacion Dinamica, Vuelta Atras)
void resolver() {
    // TODO: Implementar algoritmo
}

// Resuelve un caso de prueba leyendo la entrada y mostrando la salida
void resuelveCaso() {
    // 1. Lectura de datos del caso
    
    // 2. Resolver
    resolver();
    
    // 3. Escribir resultado
}

int main() {
    // Redireccion de entrada para depuracion local en Visual Studio
#ifndef DOMJUDGE
    std::ifstream in("casos.in");
    if (!in.is_open()) in.open("datos.txt");
    auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif 

    int numCasos = 0;
    std::cin >> numCasos;
    for (int i = 0; i < numCasos; ++i) {
        resuelveCaso();
    }

#ifndef DOMJUDGE
    std::cin.rdbuf(cinbuf);
#endif

    return 0;
}
