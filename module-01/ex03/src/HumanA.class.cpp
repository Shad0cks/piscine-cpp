#include "../include/header.hpp"

HumanA::HumanA(std::string name, Weapon &selfW): _name(name), selfWeapon(selfW)
{
    return ;
}

void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->selfWeapon.getType() << std::endl;
}