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
	int turma[10][10], i, j, resultado, notabigd = 0, notabigt = 0;
	string nomes[10] = {"António", "Anabela", "Beatriz", "Bernardo", "Clara","Carlos", "Diana", "Diogo", "Elisabete", "Eurico"};

	string disciplinas[10] = {"Portugues", "Ingles", "Fisica", "TLP", "TIC","Matemática", "ACS", "Filosofia", "Quimica", "Ed.Fis."};
	for (i = 0; i < 10; i++) {
		cout << "aluno " << nomes[i] << " escreve as tuas notas separadas por 1 espaço" << endl;
		for (j = 0; j < 10; j++) {

			cin >> turma[i][j];
		}
	}

	for (i = 0; i < 10; i++) 
	{
		resultado = 0;
		for (j = 0; j < 10; j++) 
		{
			resultado += turma[i][j];
		}
		resultado = resultado / 10;
		if (resultado < notabigt) 
		{
					notabigt = resultado;
		}
        cout << "O aluno " << nomes[i] << " teve de media " << resultado << endl;
	}
	for (j = 0; j < 10; j++) 
	{
		resultado = 0;
		for (i = 0; i < 10; i++) 
		{
			resultado += turma[i][j];
		}
		resultado = resultado / 10;
		if (resultado < notabigd)
		{
			notabigd = resultado;
		}
		cout << "A disciplina " << disciplinas[j] << " teve uma media de " << resultado << endl;
	}
	cout << "a maior nota das disciplinas foi" << notabigd;
	cout << "a maior nota dos alunos foi" << notabigt;
	return 0;
}
