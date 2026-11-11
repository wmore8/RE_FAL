// Washington Morocho Lema
// FAL-E52

#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

/*
P: { 0 < v.size() < 100000 }

func ultimaVez(v: vector<string>, p: string) dev <res: bool, cont: int>

Q: { res = (existe k : 0 <= k < v.size() : v[k] == p) && (res -> cont = v.size() - (max k : 0 <= k < v.size() && v[k] == p : k)) }

Invariante:
   I = { -1 <= i < v.size() &&
         (res <-> (i >= 0 && v[i] == p)) &&
         (!res -> (para todo k : i < k < v.size() : v[k] != p)) }

Funcion de cota:
   t(i) = i + 1

Coste:
   - Caso mejor: O(1) cuando el pais buscado gano en la ultima edicion (v[v.size() - 1] == p), realizando una sola iteracion y comprobacion.
   - Caso peor: O(N) con N = v.size(), cuando el pais nunca gano o solo gano en la primera edicion (v[0]), recorriendo el vector entero.
*/

bool resuelveCaso() {
    int N = 0; cin >> N;

    if (N == 0) return false;
    // leer los datos de la entrada
    string ganador, nacionalidad; 
    cin >> ganador;
    vector<string> ganadores;
    bool esGanador = false;
    int indice = 0;
 
    for (int i = 0; i < N; i++) {
        cin >> nacionalidad;
        if (nacionalidad == ganador) {
            esGanador = true;// tambien podriamos quedarnos con el indice de su posicion para evitar recorrerlo de nuevo asi el coste seria N
            indice = i;
        }
    }

    // escribir sol
    if (esGanador) {
        cout << N - indice << "\n";
    }
    else {
        cout << "NUNCA\n";
    }

    return true;
}

int main() {
    // Para la entrada por fichero.
    // Comentar para acepta el reto
#ifndef DOMJUDGE
    std::ifstream in("1_02.in");
    auto cinbuf = std::cin.rdbuf(in.rdbuf()); //save old buf and redirect std::cin to casos.txt
#endif 

    while (resuelveCaso());

    // Para restablecer entrada. Comentar para acepta el reto
#ifndef DOMJUDGE // para dejar todo como estaba al principio
    std::cin.rdbuf(cinbuf);
    system("PAUSE");
#endif
    return 0;
}
