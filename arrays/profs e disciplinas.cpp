#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	string disc[9] = { "mat","Ing","pt","tlp","tic","fq","ai","edf","acso"};
	string prof[9] = { "carlos","marina","felipe","carla","Catarina","felipa","ricardo","rogerio","jorge"};
	int n;
	do {
		cout << "que materia e stor queres saber?\n";
		cin >> n-1;
		cout << "o prof é " << prof[n] << " e a materia é " << disc[n] << ".\n";


	}while(n!=0);

		return 0;
}