#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>

using namespace std;

void mostrarSucesion(vector <int>, int);
void calcularSucesion(vector <int> &, int);

int main() {
    int n;
    vector <int> elementos;
    // agregamos los dos primeros elementos
    elementos.push_back(0);
    elementos.push_back(1);
    cout << "Número de elementos a generar (n >= 1): ";
    cin >> n;
    calcularSucesion(elementos, n);
    mostrarSucesion(elementos, n);
    return 0;
}

void mostrarSucesion(vector <int> sucesion, int n) {
    for (int i = 0; i < n; i++) {
        cout << sucesion[i] << " ";
    }
    cout << endl;
}

void calcularSucesion(vector <int> &sucesion, int n) {
    for (int i = 2; i < n; i++) {
        sucesion.push_back(sucesion[i - 1] + sucesion[i - 2]);
    }
}
