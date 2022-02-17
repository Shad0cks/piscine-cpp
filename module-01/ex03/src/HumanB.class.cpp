#include "../include/header.hpp"


HumanB::HumanB(std::string name): _name(name), selfWeapon(nullptr)
{
    return ;
}

void HumanB::setWeapon(Weapon &newW)
{
    
    this->selfWeapon = &newW;
    return ;
}

void HumanB::attack(void)
{
    if (this->selfWeapon)
        std::cout << this->_name << " attacks with their " << this->selfWeapon->getType() << std::endl;
    else
        std::cout << this->_name << " attacks with their fists" << std::endl;
}