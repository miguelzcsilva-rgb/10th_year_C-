#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	string carros[5] = {"portugues","historia","ciencias","Ingles","frances"};
	int r;
	char sair='n';
	do {
		cout << "escolha um numero \n";
		cin >> r;
		if (r < 0 || r>4)
			cout << "es parvo boy\n";
		else{
			cout << "a materia q escolheste foi " << carros[r] << ".\n";
			cout << "queres sair do programa?\n ";
			cin >> sair;
		}
	}while(sair!='s');
	return 0;
}
