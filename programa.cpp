#include <iostream>
using namespace std;

// Função para calcular a área de um retângulo
int areaRetangulo(int base, int altura) {
    return base * altura;
}

int main() {
    // 1. Mensagem na tela
    cout << "Ola, Mundo!" << endl;

    // 2. Cálculo simples (soma de dois números)
    int a = 10, b = 5;
    int soma = a + b;
    cout << "A soma de " << a << " + " << b << " = " << soma << endl;

    // 3. Usando a função para calcular área
    int base = 4, altura = 3;
    cout << "A area do retangulo (" << base << " x " << altura << ") = " 
         << areaRetangulo(base, altura) << endl;

    return 0;
}
