#include "../include/header.hpp"

int main(int argc, char const *argv[])
{
	const Animal* meta = new Animal(); 
	const Animal* j = new Dog();
	const Animal* i = new Cat();


	std::cout <<  std::endl; 
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl << std::endl; 
	
	i->makeSound(); 
	j->makeSound();
    meta->makeSound();
	std::cout <<  std::endl; 

	const WrongAnimal* o = new WrongAnimal(); 
	const WrongAnimal* k = new WrongCat();

	std::cout <<  std::endl; 
	std::cout << k->getType() << " " << std::endl;
	std::cout << o->getType() << " " << std::endl << std::endl; 
	std::cout <<  std::endl; 
	
	o->makeSound(); 
	k->makeSound();
	std::cout <<  std::endl; 

	delete meta;
	delete i;
	delete j;
	delete o;
	delete k;
	return 0;
}
