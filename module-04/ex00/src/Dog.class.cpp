#include "../include/header.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog : " << this->type << " created " << std::endl;
}

Dog::Dog(Dog const & copy)
{

	std::cout << "Dog : copy function call" << std::endl;
	*this = copy;
}

Dog::~Dog(void)
{
	std::cout << "Dog : destroy " << this->type << std::endl;
}

Dog & Dog::operator=(Dog const & copy)
{
	std::cout << "Dog : copy op call" << std::endl;
	if (&copy != this)
		this->type = copy.type; 
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog : Whouaf , I'm a dog !" << std::endl;
}