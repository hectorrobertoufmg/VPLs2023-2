# Polimorfismo Ad-hoc ou Polimorfismo Aparente


O **polimorfismo ad-hoc** se refere a uma situação em que um código ou função pode ter comportamentos diferentes com base nos tipos de parâmetros que recebe. Em outras palavras, o código ou a função se adapta dinamicamente para lidar com diferentes tipos de dados. 

### Importante: 
polimorfismo ad hoc é resolvido em tempo de compilação com base nos tipos de argumentos passados para uma função ou método. Se uma função ou método que está em sobrecarga para `int x int` e o usuario coloca algo como `double x int` o programa nao compila, pois houve uma ambuiguidade.

Programar com sobrecargas muitas vezes são programas meio complicados de entender e com muita ambuiguidade. 

Qual é a principal vantagem do polimorfismo ad hoc?

a) Maior reutilização de código.
b) Maior flexibilidade na hierarquia de classes.
c) Maior eficiência em tempo de execução.
d) Maior segurança de tipos.

A resposta correta é a) Maior reutilização de código. O polimorfismo ad hoc permite que você crie funções ou métodos que podem ser usados com diferentes tipos de argumentos, o que leva a uma maior reutilização de código e flexibilidade na implementação.

A resposta "d) Maior segurança de tipos" não é a principal vantagem do polimorfismo ad hoc, mas sim uma característica geral das linguagens de programação com tipagem estática.

Espero que isso esclareça a questão. Se você tiver mais dúvidas ou precisar de mais informações, não hesite em perguntar.

## Como o compilador sabe qual chamar pelo parâmetro?
No final das contas, por baixo dos panos, o polimorfismo Ad-hoc o programa renomeia as funções com nomes iguais. Em alto nivel parece ter o mesmo nome, mas por baixo os nomes são diferentes.

### Exemplo:

Imagine uma função `print` que pode imprimir diferentes tipos de dados, como inteiros, strings e números de ponto flutuante. Dependendo do tipo do parâmetro passado, a função `print` mostrará o valor de maneira diferente. Por exemplo:

```cpp
void print(int value) {
    std::cout << "Valor inteiro: " << value << std::endl;
}

void print(std::string value) {
    std::cout << "String: " << value << std.endl;
}

void print(double value) {
    std::cout << "Número de ponto flutuante: " << value << std::endl;
```
Nesse exemplo, a função print tem comportamentos diferentes com base no tipo do parâmetro que recebe, demonstrando polimorfismo ad-hoc.

## **Sobrecarga (Overload)**
A sobrecarga é uma forma de polimorfismo ad-hoc. **Refere-se à capacidade de ter métodos ou funções com o mesmo nome, mas com listas de parâmetros diferentes**. Isso permite que diferentes versões da função sejam chamadas com base no número ou tipo de argumentos. **Importante lembrar que a Sobrecarga prioriza inteiros sobre doubles. Primeiro converte para inteiros e depois para double**



### Exemplo:
Considere uma classe **`Calculadora`** com uma função soma que pode adicionar números inteiros ou números de ponto flutuante:
```cpp
class Calculadora {
public:
    int soma(int a, int b) {
        return a + b;
    }

    double soma(double a, double b) {
        return a + b;
    }
};

```
## Polimorfismo Ad Hoc (Sobrecarga de Operador) em C++

O polimorfismo ad hoc, também conhecido como sobrecarga de operadores em C++, é um conceito importante na programação orientada a objetos. Ele permite que você defina diferentes comportamentos para operadores com base nos tipos de operandos envolvidos. Isso significa que um operador pode realizar operações diferentes dependendo dos tipos de dados que está manipulando.

Em C++, a sobrecarga de operadores é alcançada definindo funções de operador personalizadas para classes ou tipos de dados. A ideia é que, se você tiver uma classe personalizada e desejar que ela suporte operações aritméticas, de comparação ou outros tipos de operações com objetos dessa classe, você pode sobrecarregar os operadores para que funcionem de maneira significativa.

Aqui está um exemplo de como você pode sobrecarregar o operador de adição (+) para duas classes personalizadas em C++:

### Exemplo
```cpp
#include <iostream>

class ComplexNumber {
public:
    ComplexNumber(double real, double imag) : real_(real), imag_(imag) {}

    ComplexNumber operator+(const ComplexNumber& other) {
        return ComplexNumber(real_ + other.real_, imag_ + other.imag_);
    }

    void display() {
        std::cout << real_ << " + " << imag_ << "i" << std::endl;
    }

private:
    double real_;
    double imag_;
};

int main() {
    ComplexNumber num1(3.0, 2.0);
    ComplexNumber num2(1.5, 4.5);

    ComplexNumber result = num1 + num2;

    std::cout << "Resultado da adição: ";
    result.display();

    return 0;
}
```

## **Coerção**
A **coerção**, também conhecida como conversão de tipo, **refere-se à conversão automática de um tipo de dados em outro.** Isso pode ocorrer **implicitemente**, sem a necessidade de intervenção do programador, **ou explicitamente**, por meio de uma operação de **casting**.
### **Exemplo:**
Imagine uma função que recebe um número de ponto flutuante e realiza uma operação:

```cpp
void operacao(double valor) {
    // Realiza a operação com o número de ponto flutuante
}
```
Se você chamar essa função com um valor inteiro, a **coerção implícita** ocorrerá, onde o valor **inteiro será automaticamente convertido** em um número de ponto flutuante para a operação. Por exemplo:
```cpp
int numeroInteiro = 5;
operacao(numeroInteiro); // O valor inteiro é implicitamente convertido em um número de ponto flutuante para a operação.
```

**Coerção explícita** pode ser usada quando você deseja converter um tipo em outro, com o uso de casting. Por exemplo:
```cpp
double numeroPontoFlutuante = 3.14;
int numeroInteiro = static_cast(int)(numeroPontoFlutuante);
```

Nesse caso, `static_cast` é usado para fazer uma conversão explícita de um número de ponto flutuante em um número inteiro.

