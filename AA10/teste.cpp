#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include "funcoes.hpp"

void printTexto(std::vector<std::string> &texto)
{
    for(auto palavra : texto)
    {
        std::cout << palavra << std::endl;
    }
}
int main()
{

    std::vector<std::string> texto = {"a senha que voce deve utilizar é cachorro e gato"};
    std::set<std::string> segredos = {"cachorro gato"};


    substituti_strings_por_asteriscos(texto, segredos);
    printTexto(texto);
    return 0;
}