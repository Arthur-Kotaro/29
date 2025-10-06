#include "Animals.hpp"


Animal::Animal(std::string _name, unsigned int _age)
{
    setName(_name);
    setAge(_age);
}


unsigned int Animal::getAge() const {return age;}
std::string Animal::getName() const {return name;}
void Animal::setAge(unsigned int _age)
{
    if(_age >= 0 && _age < 30) age = _age;
    else std::cout << "Incorrect age\n";
}
void Animal::setName(std::string _name) { name = std::move(_name);}
Animal::~Animal() {};



Cat::Cat(std::string _name, unsigned int _age): Animal(_name, _age) {}
void Cat::voice() {std::cout << "Meow! ";}
Cat::~Cat() {}


Dog::Dog(std::string _name, unsigned int _age): Animal(_name, _age) {}
void Dog::voice() {std::cout << "Bark! ";}
Dog::~Dog(){}