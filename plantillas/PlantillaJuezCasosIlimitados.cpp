// =========================================================
// PLANTILLA: Casos ilimitados hasta fin de fichero (EOF)
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

// Resuelve un caso de prueba. Devuelve false si se alcanza el EOF (std::cin falla)
bool resuelveCaso() {
    int valor;
    std::cin >> valor;
    
    // Comprobar fin de entrada
    if (!std::cin) {
        return false;
    }
    
    // Lectura del resto del caso
    
    // Resolver y mostrar resultado
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
