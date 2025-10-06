#include "main1.hpp"

const int arr_size = 4;


class TalentedDog: virtual public Dog, virtual public Swimming, virtual Dancing, virtual Counting
{
public:
    TalentedDog(std::string _name, unsigned int _age): Dog(_name, age), Animal(_name, _age) {}
    virtual void show_talents()
    {
        std::cout << "\nIt is " << getName() << ". ";
        Talent::show_talents();
    }
};


int main()
{
    Animal* cat1 = new Cat("Vasya-Boy", 3);
    Animal* dog1 = new Dog("Bobik-Boy", 5);
    TalentedDog* doggy = new TalentedDog("Jhony-Boy", 10);

    std::cout << "Hello, I am " << cat1->getName() << ". I am " << cat1->getAge() << " years old. ";
    cat1->voice();
    std::cout << std::endl;
    
    std::cout << "Hello, I am " << dog1->getName() << ". I am " << dog1->getAge() << " years old. ";
    dog1->voice();
    std::cout << std::endl;
    
    std::cout << "Hello, I am " << doggy->getName() << ". I am " << doggy->getAge() << " years old. ";
    doggy->voice();
    std::cout << std::endl;
    doggy->show_talents();

    delete cat1;
    delete dog1;
    delete doggy;
    return 0;
}