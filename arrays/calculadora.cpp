#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero[2], opera��o;
		char op;

		for (int i = 0; i <= 1; i++) {

			cout << "escreve o " << i+1 << "�n:";
			cin >> numero[i];
		}
		cout << "que opera��o queres fazer(+,-,*,/)";
		cin >> op;
		switch (op)
			case'+':
				opera��o = numero[0] + numero[1];
				switch (op)
			case'-':
				opera��o = numero[0] - numero[1];
				switch (op)
			case'/':
				opera��o = numero[0] / numero[1];
				switch (op)
			case'*':
				opera��o = numero[0] * numero[1];

				cout << "o resultado �" << opera��o << ".";
}