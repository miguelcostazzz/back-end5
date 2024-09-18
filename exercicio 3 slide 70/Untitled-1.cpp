#include <iostream>
using namespace std;

int main() {
    // Definindo a matriz 5x2
    int matriz[5][2];
    int soma = 0;
    int elementos = 0;

    // Solicitando os elementos ao usuário
    cout << "Digite os elementos da matriz 5x2:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
            soma += matriz[i][j];  // Somando os elementos
            elementos++;
        }
    }

    // Calculando a média
    double media = static_cast<double>(soma) / elementos;

    // Exibindo o resultado
    cout << "A média dos elementos da matriz é: " << media << endl;

    return 0;
}