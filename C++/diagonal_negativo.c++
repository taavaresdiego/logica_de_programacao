#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int N, cont;
    cout << "Qual a ordem da matriz: ";
    cin >> N;

    int mat[N][N];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) { // Correção aqui
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << "Diagonal principal: " << endl;

    for (int i = 0; i < N; ++i) {
        cout << mat[i][i] << " ";
    }

    cont = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) { 
            if (mat[i][j] < 0) {
                cont++;
            }
        }
    }
    cout << "Quantidade de negativos: " << cont << endl;

    return 0;
}
