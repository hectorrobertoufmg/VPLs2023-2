# Polimorfismo Ad-hoc ou Polimorfismo Aparente


O **polimorfismo ad-hoc** se refere a uma situação em que um código ou função pode ter comportamentos diferentes com base nos tipos de parâmetros que recebe. Em outras palavras, o código ou a função se adapta dinamicamente para lidar com diferentes tipos de dados.

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
A sobrecarga é uma forma de polimorfismo ad-hoc. **Refere-se à capacidade de ter métodos ou funções com o mesmo nome, mas com listas de parâmetros diferentes**. Isso permite que diferentes versões da função sejam chamadas com base no número ou tipo de argumentos.

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

