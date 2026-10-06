// =========================================================
// Ejercicio: 1.01 - Maximo de una secuencia
// Asignatura: Fundamentos de la Algoritmia (FAL)
// =========================================================

#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

/*
Especificacion formal:
P: N >= 1
func cuantosMax(vector<int>: v) return pair<int,int> res
Q: res.first = {max i : 0 <= i < N : v[i]} &&
   res.second = {#i : 0 <= i < N : v[i] == res.first}

Invariante:
I = 0 <= i <= v.size() &&
mayor_puntuacion.first = (max k: 0 <= k < i : v[k]) &&
mayor_puntuacion.second = (# k : 0 <= k < i : v[k] == mayor_puntuacion.first)

Coste: O(N) lineal, siendo N los elementos del vector.
Lectura con acceso y actualizacion constante O(1).
*/

// Resuelve un caso de prueba leyendo de la entrada la configuracion y mostrando la respuesta
void resuelveCaso() {
    int num = 0;
    cin >> num;
    pair<int, int> mayor_puntuacion = { num, 1 };

    while (num != 0) {
        cin >> num;
        if (num != 0) {
            if (num > mayor_puntuacion.first) {
                mayor_puntuacion = { num, 1 };
            }
            else if (num == mayor_puntuacion.first) {
                mayor_puntuacion.second++;
            }
        }
    }

    cout << mayor_puntuacion.first << " " << mayor_puntuacion.second << "\n";
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
