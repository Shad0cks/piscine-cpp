#include "../include/header.hpp"

Weapon::Weapon (std::string Wname) : _type(Wname)
{
    return ;
}

std::string &Weapon::getType(void)
{
    return(this->_type);
}

void Weapon::setType(std::string value)
{
    this->_type = value;
    return ;
}