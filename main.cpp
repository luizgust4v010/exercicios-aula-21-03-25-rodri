#include <iostream>
#include <climits>
using namespace std;

int main() {
    const int DIAS_ANO = 365;
    double temperaturas[DIAS_ANO];
    double soma = 0.0;
    int diasAbaixoDaMedia = 0;


    cout << "Digite a temperatura média de cada um dos " << DIAS_ANO << " dias do ano:" << endl;
    for (int i = 0; i < DIAS_ANO; i++) {
        cout << "Dia " << i + 1 << ": ";
        cin >> temperaturas[i];
        soma += temperaturas[i];
    }


    double mediaAnual = soma / DIAS_ANO;


    double menorTemperatura = INT_MAX;
    double maiorTemperatura = INT_MIN;


    for (int i = 0; i < DIAS_ANO; i++) {
        if (temperaturas[i] < menorTemperatura) {
            menorTemperatura = temperaturas[i];
        }
        if (temperaturas[i] > maiorTemperatura) {
            maiorTemperatura = temperaturas[i];
        }
        if (temperaturas[i] < mediaAnual) {
            diasAbaixoDaMedia++;
        }
    }


    cout << "\nResultados:" << endl;
    cout << "Menor temperatura do ano: " << menorTemperatura << "°C" << endl;
    cout << "Maior temperatura do ano: " << maiorTemperatura << "°C" << endl;
    cout << "Temperatura média anual: " << mediaAnual << "°C" << endl;
    cout << "Número de dias com temperatura inferior à média anual: " << diasAbaixoDaMedia << " dias" << endl;

    return 0;
}
