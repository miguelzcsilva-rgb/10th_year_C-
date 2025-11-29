#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	string namorada[5] ;
	string apelido[5] ;
	int n,i;
	char sair='n';
	for (i = 0; i < 5; ++i) {
		cout << "qual o nome da namorada\n" << i+1 << ".";
		cin >> namorada[i];
		cout << "qual o apelido da namorada\n" << i + 1 << ".";
		cin >> apelido[i];
	}
	do {
		cout << "que namorada vai querer?\n";
		cin >> n;
		if (n > 5||n<=0) {
			cout << "NÃO TENS ASSIM TANTAS";
		}
		else {
			cout << "a namorada é a " << namorada[n - 1] << " e o apelido é " << apelido[n - 1] << ".\n";
			cout << "queres sair(s/n)\n";
			cin >> sair;
		}
	} while (sair != 's');

		return 0;
}