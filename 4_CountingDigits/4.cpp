#include <iostream>

using namespace std;

int contarDigitos(int);

int main() {
    int n;
    cout << "Ingresa n: ";
    cin >> n;
    cout << n << " tiene " << contarDigitos(n) << " dígito(s)." << endl;
    return 0;
}

int contarDigitos(int n) {
    int cont = 0;
    while (n) {
        n /= 10;
        cont++;
    }

    return cont;
}
