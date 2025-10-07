#include "main1.hpp"

int main()
{
    Animal* cat1 = new Cat("Vasya-Boy", 3);
    Animal* dog1 = new Dog("Bobik-Boy", 5);
    Dog* doggy = new Dog("Jhony-Boy", 10);
    doggy->addTalent(new Swimming());
    doggy->addTalent(new Counting());

    std::cout << "Hello, I am " << cat1->getName() << ". I am " << cat1->getAge() << " years old. ";
    cat1->voice();
    std::cout << std::endl;
    
    std::cout << "Hello, I am " << dog1->getName() << ". I am " << dog1->getAge() << " years old. ";
    dog1->voice();
    std::cout << std::endl;
    
    std::cout << "Hello, I am " << doggy->getName() << ". I am " << doggy->getAge() << " years old. ";
    doggy->voice();
    std::cout << std::endl;
    doggy->showTalents();

    delete cat1;
    delete dog1;
    delete doggy;
    return 0;
}