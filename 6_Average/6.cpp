#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

void leerElementos(int a[], int n);
float calcularPromedio(int a[], int n);

int main() {
    int n;
    cout << "Número de elementos: ";
    cin >> n;
    int A[n];
    leerElementos(A, n);
    cout << "El promedio es: " << calcularPromedio(A, n) << endl;
    return 0;
}

void leerElementos(int a[], int n) {
    for (int i = 0; i < n; i++) cin >> a[i];
}

float calcularPromedio(int a[], int n) {
    float prom = 0;
    for (int i = 0; i < n; i++) prom += (float)a[i];
    return prom / n;
}
