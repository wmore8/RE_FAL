// Washington Morocho Lema
// FAL-E52

#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

/*
pred esSubida(v,p,q) -> para todo i : p <= i < q : v[i] < v[i+1] 

P: 1 <= N <= 200.000 && 0 <= D <= 1.000.000

func esApto(vector<int> : v, int : D) dev <bool: ok>

Q: ok = (para todo i,j : 0 <= i < j < v.size() && esSubida(v, i ,j): v[j] - v[i] <= D)

Invariante -> I = 1 <= i < v.size() &&
desnivel = (para todo p,q : 0 <= p < q < i && esSubida(v,p,q) : v[q] - v[p]) && 
apto = (para todo p,q : 0 <= p < q < i && esSubida(v,p,q) : v[q] - v[p] <= D)

Funcion de cota: t(i) = v.size()  - i

Coste: 
    - Caso mejor: O(1) si el desnivel supera D en las primeras posiciones y el bucle termina antes.
    - Caso peor: O(N) con N = v.size(), cuando la excursion es apta o la infraccion se detecta al final del vector, 
    realizando N - 1 iteraciones con operaciones de coste O(1).
*/

// Resuelve un caso de prueba, leyendo de la entrada la
// configuración, y escribiendo la respuesta
bool resuelveCaso() {
    // leer los datos de la entrada
    int D = 0, N = 0; cin >> D >> N;

    if (!std::cin)
        return false;

    vector<int> alturas(N); //inicializamos el vector de los valores

    for (int i = 0; i < N; i++) {
        int valor; cin >> valor;
        alturas[i] = valor;
    }

    // escribir sol
    bool apto = true;

    int altura_anterior = alturas[0], desnivel = 0;

    for (int i = 1; i < N && apto; i++) {
        if (altura_anterior < alturas[i]) { // si el desnivel es creciente
            desnivel += alturas[i] - altura_anterior;
        }
        else { // si el desnivel es decreciente o se mantiene igual
            desnivel = 0;
        }


        if (desnivel > D) {
            apto = false;
        }

        altura_anterior = alturas[i];
    }
   
    if (apto) {
        cout << "APTA\n";
    }
    else {
        cout << "NO APTA\n";
    }


    return true;

}

int main() {
    // Para la entrada por fichero.
    // Comentar para acepta el reto
#ifndef DOMJUDGE
    std::ifstream in("1_03.in");
    auto cinbuf = std::cin.rdbuf(in.rdbuf()); //save old buf and redirect std::cin to casos.txt
#endif 


    while (resuelveCaso())
        ;


    // Para restablecer entrada. Comentar para acepta el reto
#ifndef DOMJUDGE // para dejar todo como estaba al principio
    std::cin.rdbuf(cinbuf);
    system("PAUSE");
#endif

    return 0;
}