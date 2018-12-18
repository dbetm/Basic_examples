#include <bits/stdc++.h>

using namespace std;

int convertirADecimal(string);

int main() {
    string numeroBinario;
    cout << "Escribe el número en binario: ";
    cin >> numeroBinario;
    cout << numeroBinario << " >> " << convertirADecimal(numeroBinario) << endl;
    return 0;
}

int convertirADecimal(string binario) {
    int numero = 0;
    int j = 0;
    for (int i = binario.length() - 1; i >= 0; i--, j++)
        if(binario[i] == '1') numero += pow(2, j);
    return numero;
}
