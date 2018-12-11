#include <iostream>

using namespace std;

int factorial(int);

int main() {
    int n;
    cout << "Escribe n: ";
    cin >> n;
    cout << "El factorial es: " << factorial(n) << endl;
    return 0;
}

int factorial(int n) {
    if(n <= 1) return 1;
    return n * factorial(n - 1);
}
