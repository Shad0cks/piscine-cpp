#include "../include/header.hpp"

Animal::Animal(std::string name) : type(name)
{
	std::cout << "Animal : " << this->type << " created " << std::endl;
}

Animal::Animal(void) : type("unknow")
{
	std::cout << "Animal : " << this->type << " created " << std::endl;
}

Animal::Animal(Animal const & copy)
{

	std::cout << "Animal : copy function call" << std::endl;
	*this = copy;
}

Animal::~Animal(void)
{
	std::cout << "Animal : destroy " << this->type << std::endl;
}

Animal & Animal::operator=(Animal const & copy)
{
	std::cout << "Animal : copy op call" << std::endl;
	if (&copy != this)
		this->type = copy.type; 
	return *this;
}

std::string Animal::getType(void) const
{
	return this->type;
}
