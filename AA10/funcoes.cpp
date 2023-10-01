#include "funcoes.hpp"
/*
  Esta funcao faz um slice de um elemento do vetor de strings.
*/

std::vector<std::string> to_slice(std::vector<std::string> &vec)
{
  std::string palavra;
  std::vector<std::string> palavras;
  int contador = 0;
  for(std::string frase: vec)
  {
    for(char c: frase)
    {
      contador++;
      if((c != ' '))
      {
        palavra += c;
        if(contador == (frase.size()-1))
        {
          palavras.push_back(palavra);
          break;
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

std::set<std::string> to_slice(std::set<std::string> &vec)
{
  int contador = 0;
  std::string palavra;
  std::set<std::string> palavras;
  for(std::string frase: vec)
  {
    for(char c: frase)
    {
      contador++;
      if(c != ' ')
      {
        
        palavra += c;
        if(contador == (frase.size() - 1))
        {
          palavras.insert(palavra);
          break; 
          
        }
        
      }else
      {
        palavras.insert(palavra);
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


void coloca_asterisco(std::string &palavra)
{
  std::string palavraTemp;

  for(auto c : palavra)
  {
    palavraTemp += '*';
  }

  palavra = palavraTemp;

}


void leia_sequencia_palavras(std::vector<std::string>&vec) {
  
 
  std::vector<std::string> palavras = to_slice(vec);

  vec = palavras;
   
}

void substituti_strings_por_asteriscos(
  std::vector<std::string>& texto,
  std::set<std::string>& segredos) 
{
  leia_sequencia_palavras(texto);
  // altera no endereço de memoria 
  std::set<std::string> palavras = to_slice(segredos);
  segredos = palavras;

  for(std::string &palavra : texto)
  {
    for(std::string palavraSecreta : segredos)
    {
        if(palavra == palavraSecreta)
        {
          coloca_asterisco(palavra);
        }
    }
  }

}