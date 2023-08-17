#include <iostream>

/*
hello(): imprime a frase "Hello, World!" na saída padrão. Lembre de quebrar a linha após imprimir esse resultado (basta colocar o caracter '\n' ao final da string, ou então usar std::endl).

soma(a, b): retorna o valor da soma de a e b.

digitos(s): conta a quantidade de digitos na string s.

gcd(a, b): calcula o maior divisor comum entre a e b. Assuma que a e b sejam inteiros positivos.

*/

int retorna_maior_menor(unsigned a, unsigned b, char str)
{
    int maior, menor;
    if(a > b)
    {
        maior = a;
        menor = b;
    }
    else if(b > a)
    {
        maior = b;
        menor = a;
    }
    else
    {
        maior = menor = a;
    }

    if(str == '>'){return maior;}
    else{return menor;}
   
}

void hello_world(void) 
{
  std::cout << "Hello, World!" << std::endl;
}

/**
 * Esta funcao soma dois numeros inteiros e retorna o resultado da soma.
 * Exemplo:
 *   soma(2, 3) == 5
 * \param <a> O primeiro parametro da soma.
 * \param <b> O primeiro parametro da soma.
 * \return A soma dos parametros a e b.
 */
int soma(const int a, const int b) {
  int result = a + b;
  return result;
}

/**
 * Esta funcao conta a quantidade de digitos em uma string.
 * Exemplos:
 *   digits("") == 0
 *   digits("OiBc") == 0
 *   digits("OiB2c") == 1
 *   digits("Oi1B2c") == 2
 * \param <str> A string que deve ser processada.
 * \return O numero de digitos na string. Note que esse valor eh sempre maior
 *   ou igual a zero.
 */
unsigned int digitos(std::string &str) {
  int counter = 0;
  // iteração com a string
  for (char c: str)
  {
    // confere cada uma dos caracteres da string, com a funcao isdigit();
    if(std::isdigit(c))
    {
        counter++;
    }
  }
  return counter;
}

/**
 * Esta funcao calcula o maior divisor comum de dois numeros inteiros.
 * Exemplo:
 *   gcd(18, 12) == 6
 *   gcd(6, 12) == 6
 *   gcd(7, 5) == 1
 * \param <a> O primeiro dos numeros. Nao precisa tratar o caso em que a for 0.
 * \param <b> O segundo dos numeros. Nao precisa tratar o caso em que b for 0.
 * \return O maior divisor comum de a e b.
 */
unsigned int gcd(const unsigned int a, const unsigned int b) {
  
  int menor = retorna_maior_menor(a, b, '<');
  int maior = retorna_maior_menor(a, b, '>');
  
  if((maior % menor) == 0)
  {
    
    return menor;
  }
  else
  {
    int i = 1;
    int mdc = 1;
    while (i < menor)
    {
      
      if(((menor % i) == 0) && ((maior % i) == 0))
      {
        mdc = i;
      }
      
      ++i;
      
    }
    return mdc;

  }   


  return 0;
}