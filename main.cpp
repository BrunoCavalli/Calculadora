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

float divisao(float x, float y) {
    return x / y;
}

float raiz(int y) {
    return sqrt(y);
}

int main() {
    float a;
    float b;
    char operacao;

    cout << "Escolha uma operacao (+ para soma, - para subtracao, / para divisao, R para raiz): ";
    std::cin >> operacao;


    float resultado;
    if (operacao == '+' || operacao == '-' || operacao == '/') {
        std:cout << "digite um valor:";
        std::cin >> a;

        cout << "digite outro valor:";
        std::cin >> b;

        if (operacao == '+') {
            resultado = soma(a, b);
        } else if (operacao == '-') {
            resultado = subtracao(a, b);
        } else if (operacao == '/') {
            resultado = divisao(a, b);
    }
    } else if (operacao == 'R') {
        cout << "digite um valor:";
        std::cin >> a;
        resultado = raiz(a);
    }
    else {
        cout << "Erro, tente novamente" << endl;
        return 1;
    }



    cout << resultado << endl;

    return 0;
}