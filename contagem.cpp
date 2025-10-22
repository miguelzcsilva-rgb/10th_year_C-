#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n;
	cout << "escreve um numero";
	cin >> n;

	if (n <= 0) { cout << "és parvo"; }

	for (int i = 0; i <= n; i++) {

		cout<<"a contagem" << n - i << "\n";
	}
}