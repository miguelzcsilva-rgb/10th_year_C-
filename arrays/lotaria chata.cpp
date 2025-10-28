#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int utilizador[5], num[5], i, trocas, auxiliar, acerto = 0,conta=0,j;
	do {
		conta = 0;
		for (i = 0; i < 5; i++) {

			num[i] = rand() % 5 + 1;
			for (j = 0; j < i; j++) {
				if (num[j] == num[i]) {
					conta++;
				}



			}
		}
	} while (conta != 0);
	for (i = 0; i < 5; i++) {

		cout << "escreva o " << i + 1 << "é numero da sua chave \n";
		cin >> utilizador[i];
		if (utilizador[i] <= 0 || utilizador[i] > 50) {
			i--;
			cout << "boy tu és estupido ou o q, é um numero entre 1 e 50\n";
		}
	}
	do {
		trocas = 0;

		for (i = 0; i < 4; i++) {
			if (num[i] > num[i + 1]) {
				auxiliar = num[i];
				num[i] = num[i + 1];
				num[i + 1] = auxiliar;
				trocas++;
			}
		}


	} while (trocas != 0);
	for (i = 0; i < 5; i++) {
		if (utilizador[i] == num[i]) {
			acerto++;
		}
		
		}if (acerto == 5) {

			cout << "parabens recebeste 1 trilhão de dogecoins";

		}
		else if(acerto) {
			cout << "acertaste " << acerto << " numeros\n";

			for (i = 0; i < 5; i++) {
				cout << "os numeros que te sairam foram " << num[i] << "\n";
			}
		return 0;
	}
}
