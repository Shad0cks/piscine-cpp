#include "header.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    this->_attackDamage = 20;
    this->_energiePoint = 50;
    this->_healthPoint = 100;
    this->_name = "unknow";
    std::cout << "ScavTrap : unknow have spawn" << std::endl;
    return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_attackDamage = 20;
    this->_energiePoint = 50;
    this->_healthPoint = 100;
    this->_name = name;
    std::cout << "ScavTrap : " << name << " have spawn" << std::endl;
    return ;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap : " << this->_name << " is dead" << std::endl;
    return ;
}

ScavTrap::ScavTrap(ScavTrap const & copy)
{
    std::cout << "ScavTrap : copy construct" << std::endl;
    *this = copy;
    return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & copy)
{
    if (this != &copy)
    {
        std::cout << "ScavTrap : copy assignement op" << std::endl;
        this->_attackDamage = copy._attackDamage;
        this->_energiePoint = copy._energiePoint;
        this->_healthPoint = copy._healthPoint;
        this->_name = copy._name;
    }
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap : " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
    return ;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap : Gate keeper mode activated !" << std::endl;
    return ;
}