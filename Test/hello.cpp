#include <iostream>

using namespace std;

int main() {

    int vida = 0; //1 2 3
    char letras = 'S'; //B
    //char letras[20]; //vetor com até 20 caracteres
    double decimal = 5.5; //2.4999
    float decimal2 = 6.6; //2.5
    bool vivo = true; // true = verdadeiro (1) false = falso (0)
    string nome = "Thomas"; //textos

    std::cout << "Escreve o numero de vidas: " << std::endl;
    std::cin >> vida;
    std::cout << "Digite uma letra: " << std::endl;
    std::cin >> letras;
    std::cout << "Digite uma número: " << std::endl;
    std::cin >> decimal;
    std::cout << "Digite seu nome: : " << std::endl;
    std::cin >> nome;

    std::cout << vida << "\n" << letras << "\n" << decimal << "\n" << decimal2 << "\n" << vivo << "\n" << nome << std::endl;

    return 0;
}
