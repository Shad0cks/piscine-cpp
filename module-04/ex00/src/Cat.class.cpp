#include "../include/header.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat : " << this->type << " created " << std::endl;
}

Cat::Cat(Cat const & copy)
{

	std::cout << "Cat : copy function call" << std::endl;
	*this = copy;
}

Cat::~Cat(void)
{
	std::cout << "Cat : destroy " << this->type << std::endl;
}

Cat & Cat::operator=(Cat const & copy)
{
	std::cout << "Cat : copy op call" << std::endl;
	if (&copy != this)
		this->type = copy.type; 
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat : Miaou , I'm a cat !" << std::endl;
}