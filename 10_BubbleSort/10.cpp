#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

void ordenarBurbuja(int [], int n);
void mostrarVectorOrdenado(int [], int n);

int main() {
    int n;
    cout << "Número de elementos: ";
    cin >> n;
    int A[n];
    cout << "Ingresa los elementos separados por un espacio: " << endl;
    for (int i = 0; i < n; i++) cin >> A[i];
    ordenarBurbuja(A, n);
    mostrarVectorOrdenado(A, n);
    return 0;
}

void ordenarBurbuja(int A[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if(A[j] > A[j + 1]) {
                int aux = A[j];
                A[j] = A[j + 1];
                A[j + 1] = aux;
            }
        }
    }
}

void mostrarVectorOrdenado(int A[], int n) {
    for (int i = 0; i < n; i++) cout << A[i] << " ";
    cout << endl;
}
