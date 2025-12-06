#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n, maior= -2147483648, menor=  2147483647;
	do {
		cout << "diz um numero";
		cin >> n;
		if (maior<n)
		{
			maior = n;

		}
		if (menor > n && n != 0)
		{
			menor = n;
		}

	} while (n != 0);
	cout << "os o maior numero foi" << maior << "e o menor numero foi" << menor << ".\n";
	return 0;
}