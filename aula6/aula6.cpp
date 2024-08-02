#include <iostream> 

using namespace std;

int n1, n2; //variaveis globais

int main() {

    //operadores + - / * % ()

    int n3, n4; //variaveis locais
    int resultado1, resultado2;

    n1 = 11;
    n2 = 3;
    n3 = 5;
    n4 = 2;

    resultado1 = n1 / n2;
    resultado2 = n1 % n2;


    std::cout << "Resultado da divisao: " << resultado1 << std::endl;
    std::cout << "Resto da divisao: " << resultado2 << std::endl;

    return 0;
}