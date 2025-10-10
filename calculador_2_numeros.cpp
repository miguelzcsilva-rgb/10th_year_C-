#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, resultado;
    char op;
    cout << "Digite o primeiro número: ";
    cin >> n1;
    cout << "Digite o segundo número: ";
    cin >> n2;
    cout << "Escolha uma operação a realizar (+, -, *, /): ";
    cin >> op;
    switch (op) {
    case '+':
        resultado = n1 + n2;
        cout << "O resultado da soma é: " << resultado << endl;
        break;
    case '-':
        resultado = n1 - n2;
        cout << "O resultado da subtração é: " << resultado << endl;
        break;
    case '*':
        resultado = n1 * n2;
        cout << "O resultado da multiplicação é: " << resultado << endl;
        break;
    case '/':
        if (n2 != 0) {
            resultado = n1 / n2;
            cout << "O resultado da divisão é: " << resultado << endl;
        }
        else {
            cout << "Erro: Divisão por zero não é permitida." << endl;
        }
        break;
        {
    default:
        break;
        }

        return 0;
    }
}