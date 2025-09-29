/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
int kmi,kmf,litrosG,resultado;
std::cout<<"kilometros iniciais";
std::cin>>kmi;
std::cout<<"kilometros finais";
std::cin>>kmf;
std::cout<<"litros de gasolina gastos";
std::cin>>litrosG;
resultado=(litrosG*100)/(kmf-kmi);
std::cout<<"o seu automovel gasta"<<resultado<<"por 100km.";
return 0;
}