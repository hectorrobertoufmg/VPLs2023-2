#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


class Animal 
{

    public:
        Animal(std::string nome, int idade):_nome(nome), _idade(idade){}
        void virtual barulho(){}
        int get_age()
        {
            return _idade;
        }
    
        std::string _nome;
        int _idade;

         bool operator < (Animal c)
    {
        if(this->get_age() < c.get_age())
        {
            return true;
        }else{return false;}
    }

};

class Gato  :public Animal
{
    public:
    Gato(std::string nome, int idade): Animal(nome, idade){}
    
    
    void barulho() override 
    {
        std::cout << "Meow" << std::endl;
    }
};
class Cachorro :public Animal
{
    public:
    Cachorro(std::string nome, int idade): Animal(nome, idade){}
    void barulho() override
    {
        std::cout << "AU AU " << std::endl;
    }
   
};

std::ostream& operator << (std::ostream& out, Animal c)
{
    return out << "Nome: "<< c._nome <<", Idade: " << c.get_age();
}


int main()
{
    Cachorro nero = Cachorro("Nero", 10);
    Gato midas = Gato("Midas", 5);
    Cachorro Jade = Cachorro("Jade", 3);
    Cachorro Jaspion = Cachorro("Jaspion", 1);

    std::vector<Animal> animais;
    animais.push_back(nero);
    animais.push_back(midas);
    animais.push_back(Jade);
    animais.push_back(Jaspion);

    std::sort(animais.begin(), animais.end());

    for(std::vector<Animal>::iterator it = animais.begin(); it != animais.end(); it++)
    {
        std::cout << *it << std::endl;
    }
}