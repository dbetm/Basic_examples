#include <iostream>

using namespace std;

void mostrarTablasMultiplicar();

int main() {
    mostrarTablasMultiplicar();
    return 0;
}

void mostrarTablasMultiplicar() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl;
    }
}
