#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero[2], operação;
		char op;

		for (int i = 0; i <= 1; i++) {

			cout << "escreve o " << i+1 << "ºn:";
			cin >> numero[i];
		}
		cout << "que operação queres fazer(+,-,*,/)";
		cin >> op;
		switch (op)
			case'+':
				operação = numero[0] + numero[1];
				switch (op)
			case'-':
				operação = numero[0] - numero[1];
				switch (op)
			case'/':
				operação = numero[0] / numero[1];
				switch (op)
			case'*':
				operação = numero[0] * numero[1];

				cout << "o resultado é" << operação << ".";
}