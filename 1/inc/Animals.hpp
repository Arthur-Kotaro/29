#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Talents.hpp"


class Animal
{
protected:
    std::string name;
    unsigned int age;
public:
    Animal(std::string _name, unsigned int _age);
    unsigned int getAge() const;
    std::string getName() const;
    void setAge(unsigned int _age);
    void setName(std::string _name);
    virtual void voice() = 0;
    virtual ~Animal();
};

class Cat : virtual public Animal
{
public:
    Cat(std::string _name, unsigned int _age);
    virtual void voice();
    ~Cat();
};

class Dog : virtual public Animal
{
    std::vector <Talent*> talents_vec;
public:
    Dog(std::string _name, unsigned int _age);
    void addTalent(Talent* newTalent);
    void showTalents();
    virtual void voice();
    ~Dog();
};