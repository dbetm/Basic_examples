#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>

using namespace std;

void leerMatriz(vector< vector <int> > &);
void mostrarMatriz(vector< vector <int> > &);
void transponerMatriz(vector< vector <int> > &);

int main() {
    int n;
    cout << "Escribe el orden de la matriz: ";
    cin >> n;
    vector < vector<int> > A(n);
    cout << "Ingresa la matriz línea a línea: " << endl;
    leerMatriz(A);
    cout << "\nMatriz transpuesta: \n" << endl;
    transponerMatriz(A);
    mostrarMatriz(A);
    return 0;
}

void leerMatriz(vector < vector<int> > &A) {
    vector <int> a;
    int num;
    for (size_t i = 0; i < A.size(); i++) {
        for (size_t j = 0; j < A.size(); j++) {
            cin >> num;
            a.push_back(num);
        }
        A[i] = a;
        a.clear();
    }
}

void mostrarMatriz(vector < vector<int> > &A) {
    for (size_t i = 0; i < A.size(); i++) {
        for (size_t j = 0; j < A.size(); j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

void transponerMatriz(vector< vector <int> > &A) {
    vector< vector <int> > B = A;
    for (size_t i = 0; i < A.size(); i++) {
        for (size_t j = 0; j < A.size(); j++) {
            A[i][j] = B[j][i];
        }
    }
}
