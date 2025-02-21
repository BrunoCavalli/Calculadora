#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int soma(int x, int y) {
    return x + y;
}

int subtracao(int x, int y) {
    return x - y;
}

int main() {
    int a;
    int b;
    int operacao;

    cout << "Escolha uma operacao (+ para soma, - para subtracao): ";
    std::cin >> operacao;

    std:cout << "digite um valor:";
    std::cin >> a;

    cout << "digite outro valor:";
    std::cin >> b;

    int resultado;
    if (operacao == '+') {
        resultado = soma(a, b);
    } else if (operacao == '-') {
        resultado = subtracao(a, b);
    } else {
        cout << "Erro, tente novamente" << endl;
        return 1;
    }

    cout << resultado << endl;

    return 0;
}