#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N, i;

    cout << "Digite o tamanho do vetor: ";
    cin >> N;

    double *vet = new double[N]; // criando um vetor dinamico de tamanho N

    for (i = 0; i < N; i++) {
        cout << "Digite o valor da posicao " << i << ": ";
        cin >> vet[i];
    }

    cout << "Vetores digitados: ";
    cout << fixed << setprecision(1);

    for (i = 0; i < N; i++) {
        cout << vet[i] << " ";
    }

    cout << endl;

    delete[] vet; 

    return 0;
}
