#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num[3][5], num2[3][5], i, j, resultado, op;
for (i = 0; i < 3; i++) {
			cout << "escreve  " << "numeros:" << endl;
			for (j = 0; j < 5; j++) {

				cin >> num[i][j];
			}
			system("cls");
		}
		for (i = 0; i < 3; i++) {
			cout << "escrevre " << "numeros:" << endl;
			for (j = 0; j < 5; j++) {

				cin >> num2[i][j];
			}
			system("cls");
		}
		system("cls");
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << "[1] somar os numeros\n";
	cout << "[2] subtrair os numeros\n";
	cout << "[0] sair\n";
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << "qual das operações desejas realizar\n";
	cin >> op;


	switch (op) {
	case 1:
		
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 5; j++) {
				resultado = num[i][j] + num2[i][j];
				cout << resultado << " ";

			}
			cout << endl;
		}
	case 2:
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 5; j++) {
				resultado = num[i][j] - num2[i][j];
				cout << resultado << " ";

			}
			cout << endl;
		}
	case 0:
		return 0;
	}



}