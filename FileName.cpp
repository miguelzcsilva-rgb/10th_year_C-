#include <iostream>
#include <locale.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "Portuguese");
    double n1, n2, n3;
    std::cout << "Escreva o primeiro n�mero ";
    std::cin >> n1;
    std::cout << "Escreva o segundo n�mero ";
    std::cin >> n2;
    std::cout << "Escreva o terceiro n�mero ";
    std::cin >> n3;
    if (n1 > n2 && n1 > n3) {
        std::cout << "O " << n1 << " � o maior n�mero";}
    else {
        if (n3 > n2 && n3 > n1) {
            std::cout << "O " << n3 << " � o maior n�mero";}
        else {
            std::cout << "O " << n2 << " � o maior n�mero";}
        return 0; }}