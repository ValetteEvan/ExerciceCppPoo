#include <iostream>
#include <string>
#include "polymorphe.h"
#include <vector>

int main()
{
	std::vector<Animal*> animals; 
	animals.push_back(new Cat); 
	animals.push_back(new Dog);

    for (Animal* animal : animals) {
        animal->makeSound();
    }

    for (Animal* animal : animals) {
        delete animal;
    }

}