#ifndef FUNCOES_HPP
#define FUNCOES_HPP

#include <vector>
#include <string>
#include <iostream>
#include <set>
void quebra_linha();

/**
 * Esta funcao deve ser implementada de forma a atender as expectativas do
 * Gerador de Logs no que tange a capacidade do sistema de remover palavras
 * proibidas.
 */
void substituti_strings_por_asteriscos(
  std::vector<std::string>& texto,
  std::set<std::string>& segredos);


/*
Esta detecta palavras que possuem algum elemento especial.
*/
bool tem_char_especial(std::string &palavra);

std::vector<std::string> to_slice(std::vector<std::string> &vec);
std::set<std::string> to_slice(std::set<std::string> &set);

/**
 * Esta funcao deve ser implementada de forma a atender as expectativas do
 * Administrador de Banco de Dados (ABD).
 */

void leia_sequencia_palavras(std::vector<std::string>& vec);


/**
 * Esta funcao coloca o mesmo número de asteriscos que em uma palavra.
 * por exemplo: coloca_asterisco(hector) ->  ******
 * **/

void coloca_asterisco(std::string &palavra);




#endif