/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
    double mt,pt,fq,ing,media; 
    std::cout<<"qual a tua nota a pt";
    std::cin>>pt;
    std::cout<<"qual a tua nota a fq";
    std::cin>>fq;
        std::cout<<"qual a tua nota a ing";
    std::cin>>ing;
        std::cout<<"qual a tua nota a mt";
    std::cin>>mt;
    media=(mt+pt+fq+ing)/4;
    std::cout<<"a tua media e de"<<media<<".";
    return 0;
}
