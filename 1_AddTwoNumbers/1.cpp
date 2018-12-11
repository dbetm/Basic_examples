#include <iostream>

using namespace std;

int sumar(int, int);

int main(int argc, char const *argv[]) {
    int a, b;
    cout << "Escribe los números: ";
    cin >> a >> b;
    cout << sumar(a, b) << endl;
    return 0;
}


int sumar(int a, int b) {
    return a + b;
}
