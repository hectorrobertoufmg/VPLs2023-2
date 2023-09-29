#ifndef FUNCOES_HPP
#define FUNCOES_HPP

#include <vector>
#include <string>
#include <iostream>

void quebra_linha();


/*
Esta detecta palavras que possuem algum elemento especial.
*/
bool tem_char_especial(std::string &palavra);

std::vector<std::string> to_slice(std::vector<std::string> &vec);

/**
 * Esta funcao deve ser implementada de forma a atender as expectativas do
 * Administrador de Banco de Dados (ABD).
 */

void leia_sequencia_palavras(std::vector<std::string>& vec);




#endif