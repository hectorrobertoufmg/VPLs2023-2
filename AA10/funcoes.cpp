#include "funcoes.hpp"





void quebra_linha()
{
    std::cout<<std::endl;
}


/*
  Esta funcao faz um slice de um elemento do vetor de strings.
*/

std::vector<std::string> to_slice(std::vector<std::string> &vec)
{
  std::string palavra;
  std::vector<std::string> palavras;

  for(std::string frase: vec)
  {
    for(char c: frase)
    {
      if((c != ' '))
      {
        palavra += c;
        if(frase[frase.size() - 1] == c)
        {
          palavras.push_back(palavra);
        }
        
      }else
      {
        palavras.push_back(palavra);
        palavra.clear();
      }

    }
  }

  return palavras;
}

bool tem_char_especial(std::string &palavra)
{
    for(auto const &letra: palavra)
    {
        if((letra >= 65 && letra <= 90) || (letra >= 97 && letra <= 122))
        {
            
        }else
        {
            return true;
        }
        
    }
    return false;
}





void leia_sequencia_palavras(std::vector<std::string>&vec) {
  
  std::vector<std::string> palavras = to_slice(vec);

  for(auto palavra : palavras)
  {
    std::cout << palavra << std::endl;
  }



  
}