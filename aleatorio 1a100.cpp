#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	srand(time(0));
	int num;
	int randomnum = rand() % 99 + 1;
	do {
		cout << "qual e o numero\n";
		cin >> num;
		if (num < randomnum) {
			cout << "o numero e maior q isso\n";
		}
		else if(num>randomnum) {
			cout << "o numero e menor q isso\n";
		}

	} while (num != randomnum);

	cout << "acertaste o numero";
	return 0;
}