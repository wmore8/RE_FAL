// =========================================================
// PLANTILLA: Casos hasta valor centinela (ej. 0, -1, etc.)
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

// Resuelve un caso de prueba. Devuelve false si se alcanza el centinela
bool resuelveCaso() {
    // 1. Lectura del primer valor / centinela
    int valor;
    std::cin >> valor;
    
    // Condicion de parada por centinela (modificar segun problema)
    if (valor == 0) {
        return false;
    }
    
    // 2. Lectura del resto de datos del caso
    
    // 3. Resolver y mostrar resultado
    resolver();
    
    return true;
}

int main() {
    // Redireccion de entrada para depuracion local en Visual Studio
#ifndef DOMJUDGE
    std::ifstream in("casos.in");
    if (!in.is_open()) in.open("datos.txt");
    auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif 

    while (resuelveCaso())
        ;

#ifndef DOMJUDGE
    std::cin.rdbuf(cinbuf);
#endif

    return 0;
}
