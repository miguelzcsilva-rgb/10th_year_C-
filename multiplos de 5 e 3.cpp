#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n;
	do{cout << "escreve um numero";
	cin >> n;
	if (n==0){break;}
	
		if (n % 5 == 0 && n % 3 == 0)
		{
			cout << "o numero digitado é multiplo de 5 e 3 \n.";
		}
		{
			if (n % 5 == 0) {
				cout << "o numero é multiplo de 5\n";
			}
			if ( n % 3 == 0)
			{
				cout << "o numero digitado é multiplo de   3 \n.";
			}
	
		}
	}while (n != 0);
	return 0;
}