#include <iostream>
#include <locale.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Portuguese");
	float sandes = 1;
	float bolos = 0.8;
	float refrigerantes = 1.5;
	float caf� = 0.6;
	float ss, bs, rs, cs;
	int s, b, r, c;
	float lucro_unitarios, lucro_unitariob, lucro_unitarior, lucro_unitarioc,lucro_total;
	cout << "a que pre�o foram vendidos os seguintes itens sandes,bolos,refrigerantes,caf�";
	cin >> ss;
	cin >> bs;
	cin >> rs;
	cin >> cs;
	cout << " que quantidades foram vendidas dos seguintes itens sandes, bolos, refrigerantes, caf�";
	cin >> s;
	cin >> b;
	cin >> r;
	cin >> c;
	lucro_unitarios = s - sandes;
	lucro_unitariob = b - bolos;
	lucro_unitarior = r - refrigerantes;
	lucro_unitarioc = c - caf�;
	cout << "o lucro por sandes foi de " << lucro_unitarios << " .";
	cout << "o lucro por bolo foi de "<< lucro_unitariob << ".";
	cout << "o lucro por refrigerante foi de "<<lucro_unitarior <<" .";
	cout << "o lucro por caf� foi de "<<lucro_unitarioc <<" .";
	lucro_total = (lucro_unitarios * s) + (lucro_unitariob * b) + (lucro_unitarior * r) + (lucro_unitarioc * c);
	cout << "o lucro total foi de "<< lucro_total <<" .";
}  

