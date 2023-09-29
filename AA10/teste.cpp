#include "funcoes.hpp"




int main()
{
    std::vector<std::string> frase = {"Deus, para a felicidade do homem, inventou a fé e o amor."};
    std::vector<std::string> palavras = to_slice(frase);

    for(auto palavra : palavras)
    {
        std::cout << palavra << std::endl;
    }
    
    

    // for(auto palavra : palavras)
    // {
        // if(tem_char_especial(palavra))
        // {
            // std::cout << "Tem caracter especial: " << palavra << std::endl;
        // }else
        // {
            // std::cout << "Nao tem caracter especial: " << palavra << std::endl;
        // }
// 
    // }
    

    return 0;
}