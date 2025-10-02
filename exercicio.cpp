#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, n1, soma, n2;
	soma = 0;
	cout << "quantos numeros queres somar";
	cin >> n1;
	for (i = 1; i<=n1; i++) {
		cout << "quais numeros queres somar";
		cin >> n2;
		soma = soma + n2;

	}
	cout << "o valor soamdos são equivalentes a" << soma << ".";
	return 0;
}