#include <iostream>
#include <locale.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "Portuguese");
    double n1, n2, n3;
    std::cout << "Escreva o primeiro número ";
    std::cin >> n1;
    std::cout << "Escreva o segundo número ";
    std::cin >> n2;
    std::cout << "Escreva o terceiro número ";
    std::cin >> n3;
    if (n1 > n2 && n1 > n3) {
        std::cout << "O " << n1 << " É o maior número";}
    else {
        if (n3 > n2 && n3 > n1) {
            std::cout << "O " << n3 << " É o maior número";}
        else {
            std::cout << "O " << n2 << " É o maior número";}
        return 0; }}