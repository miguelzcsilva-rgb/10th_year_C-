#include<iostream>
int main()
{
	int n1;
	do {
		std::cout << "escreve um numero";
			std::cin >> n1;
			if (n1 % 2 == 0)
				std::cout << "este e um numero par ";
			else {
				std::cout << "este numero e impar";	}
	} while (n1 !=0);
	return(0);
}