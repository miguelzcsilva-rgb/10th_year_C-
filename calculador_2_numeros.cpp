#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, resultado;
    char op;
    cout << "Digite o primeiro n�mero: ";
    cin >> n1;
    cout << "Digite o segundo n�mero: ";
    cin >> n2;
    cout << "Escolha uma opera��o a realizar (+, -, *, /): ";
    cin >> op;
    switch (op) {
    case '+':
        resultado = n1 + n2;
        cout << "O resultado da soma �: " << resultado << endl;
        break;
    case '-':
        resultado = n1 - n2;
        cout << "O resultado da subtra��o �: " << resultado << endl;
        break;
    case '*':
        resultado = n1 * n2;
        cout << "O resultado da multiplica��o �: " << resultado << endl;
        break;
    case '/':
        if (n2 != 0) {
            resultado = n1 / n2;
            cout << "O resultado da divis�o �: " << resultado << endl;
        }
        else {
            cout << "Erro: Divis�o por zero n�o � permitida." << endl;
        }
        break;
        {
    default:
        break;
        }

        return 0;
    }
}