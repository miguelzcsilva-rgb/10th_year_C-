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
	int idade[30],i, contador = 0, contaidade = 0;
	float media = 0, altura[30];
	for (i = 0; i < 30; i++)
	{
		cout << "Qual � a idade da " << i+1 <<"� crian�a\n";
		cin >> idade[i];
		cout << "Qual � a ALTURA da"<< i+1 <<"� crian�a\n";
		cin >> altura[i];
		contador++;
		media = media + altura[i];

		//cout << "contador: " << contador << "\n";
	}
	media = media / contador;
	cout << "a media das alturas �" << media<<"/n";
	for (i = 0; i < 30; i++)
	{
		if (idade[i] > 13 &&altura[i] < media)
		{
			contaidade++;
			//cout << "contaidade: " << contaidade << "\n";
		}
	}
	cout << "a crian�as com menos de 13 anos com altura menor q a media s�o:\n" << contaidade;
	return 0;
}