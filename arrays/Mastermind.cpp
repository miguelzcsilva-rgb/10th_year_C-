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
	int num[4],aux[4],acerto=0 ,i,contador=0;
	for  (i=0; i < 4; i++) {
		num[i] = rand() % 2;
	}
	
	
	do {
		cout << "escreve 1 ou 0:\n";
		acerto = 0;

		for (i = 0; i < 4; i++) {
			cin >> aux[i];
			if (aux[i] == num[i]) {


				
				acerto++;
			}
		}
		cout << "tens :" << acerto << " acertos\n";
		contador++;
	}
	 while (acerto != 4);
	cout << "Parabens acabaste em " << contador << " tentativas.\n";
	return 0;
}