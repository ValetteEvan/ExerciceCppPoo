#pragma once
#include <iostream>
#include <string>

class Animal
{
public: 
    virtual void makeSound() { std::cout << "Some sound\n"; }
    virtual ~Animal() {}
};

class Cat :public Animal
{
public:
    void makeSound() override { std::cout << "Meow\n"; }
};

class Dog : public Animal 
{
    void makeSound() override { std::cout << "Woof\n"; } 
};
