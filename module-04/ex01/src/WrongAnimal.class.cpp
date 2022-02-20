#include "../include/header.hpp"

WrongAnimal::WrongAnimal(std::string name) : type(name)
{
	std::cout << "WrongAnimal : " << this->type << " created " << std::endl;
}

WrongAnimal::WrongAnimal(void) : type("unknow")
{
	std::cout << "WrongAnimal : " << this->type << " created " << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & copy)
{

	std::cout << "WrongAnimal : copy function call" << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal : destroy " << this->type << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & copy)
{
	std::cout << "WrongAnimal : copy op call" << std::endl;
	if (&copy != this)
		this->type = copy.type; 
	return *this;
}

std::string WrongAnimal::getType(void) const
{
	return this->type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal : [unknow sound] !" << std::endl;
	return ;
}