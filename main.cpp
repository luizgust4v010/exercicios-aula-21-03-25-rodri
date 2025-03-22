#include <iostream>

using namespace std;

int main()
{
    string  nome[3];

    for (int i = 0; i < 3; i++)
    {
        cout << " digite o nome " << i + 1 << " : ";
        cin >> nome[i];
    }

    string nomeProcurado;

    cout << " digite o nome a ser procurado: ";
    cin >> nomeProcurado;

    bool encontrado = false;

    for(int i = 0; i < 3; i++){
        if (nome[i] == nomeProcurado){
            encontrado = false;
            break;
        }
    }

    if (encontrado = false ){
        cout << " nao achei " << endl;
    }else {
        cout << " achei " << endl;

    }
    return 0;











}
