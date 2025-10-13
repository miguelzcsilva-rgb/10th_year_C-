#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	string carros[3] = {"Volvo","Mercedes","BMW"};
	int r;
	char sair='n';
	do {
		cout << "escolha um numero\n";
		cin >> r;
		if (r < 0 || r>2)
			cout << "es parvo boy";
		else{
			cout << "queres sair do programa";
			cin >> sair;
		}
	}while(sair!='s');
	return 0;
}