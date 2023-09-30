#include <set>
#include <vector>
#include <iostream>
#include "funcoes.hpp"



/**
 * Esta funcao deve ser implementada de forma a atender as expectativas do
 * Especialista em Lei Geral de Protecao de Dados.
 */
void leia_sequencia_palavras(std::vector<std::string>& vec) {
  std::vector<std::string> palavras = to_slice(vec);
  vec = palavras;}

/**
 * Esta funcao deve ser implementada de forma a atender as expectativas do
 * Especialista em Lei Geral de Protecao de Dados.
 */

void leia_conjunto_segredos(std::set<std::string>& segredos) {
  std::set<std::string> palavras = to_slice(segredos);
  segredos.clear();
  for(auto palavra : palavras)
  {
      if(tem_char_especial(palavra))
      {
          
      }else
      {
          segredos.insert(palavra);
      }
  }
  
}


/**
 * Esta funcao deve ser implementada de forma a atender as expectativas do
 * Gerador de Logs no que tange a capacidade do sistema de remover palavras
 * proibidas.
 */
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

/**
 * Esta funcao deve ser implementada de forma a atender as expectativas do
 * Gerador de Logs no que tange a capacidade do sistema de contar as palavras
 * formadas somente por asteriscos.
 */
unsigned conta_palavras_de_asterisco(std::vector<std::string>& texto) {
  // TODO
  return 0;
}

///============================================================================
/// O Resto do arquivo contem somente codigo de testes. Fique a vontade para
/// ler a implementacao desses testes. Porem, nao modifique essas
/// implementacoes.
///============================================================================

void testa_leitura_segredos() {
  std::set<std::string> segredos;
  leia_conjunto_segredos(segredos);
  std::cout << segredos.size() << std::endl;
}

void testa_leitura_texto() {
  std::vector<std::string> texto;
  leia_sequencia_palavras(texto);
  for (std::string str: texto) {
    std::cout << str << std::endl;
  }
}

void testa_remove_segredos() {
  std::vector<std::string> texto;
  leia_sequencia_palavras(texto);
  std::set<std::string> segredos;
  segredos.insert("cachorros");
  segredos.insert("gatos");
  substituti_strings_por_asteriscos(texto, segredos);
  for (std::string str: texto) {
    std::cout << str << std::endl;
  }
}

void testa_conta_asteriscos() {
  std::vector<std::string> texto;
  leia_sequencia_palavras(texto);
  std::cout << conta_palavras_de_asterisco(texto) << std::endl;
}

int main() {
  char s;
  std::cin >> s;
  switch(s) {
    case 'a':
      testa_conta_asteriscos();
      break;
    case 'r':
      testa_remove_segredos();
      break;
    case 's':
      testa_leitura_segredos();
      break;
    case 't':
      testa_leitura_texto();
      break;
    default:
      std::cout << "Teste invalido: " << s << std::endl;
  }
}