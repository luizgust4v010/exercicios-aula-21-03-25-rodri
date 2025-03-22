#include <iostream>
using namespace std;

int main() {
    const int TAMANHO = 10;
    int A[TAMANHO], M[TAMANHO];
    int X;


    cout << "Digite 10 números para o vetor A:" << endl;
    for (int i = 0; i < TAMANHO; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }


    cout << "\nDigite o valor de X: ";
    cin >> X;


    for (int i = 0; i < TAMANHO; i++) {
        M[i] = A[i] * X;
    }


    cout << "\nVetor M (resultado da multiplicação):" << endl
