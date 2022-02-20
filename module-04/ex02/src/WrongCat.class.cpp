#include "../include/header.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat : " << this->type << " created " << std::endl;
}

WrongCat::WrongCat(WrongCat const & copy)
{

	std::cout << "WrongCat : copy function call" << std::endl;
	*this = copy;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat : destroy " << this->type << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & copy)
{
	std::cout << "WrongCat : copy op call" << std::endl;
	if (&copy != this)
		this->type = copy.type; 
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat : Miaou , I'm a WrongCat !" << std::endl;
}