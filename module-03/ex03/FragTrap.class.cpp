#include "header.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    this->_attackDamage = 30;
    this->_energiePoint = 100;
    this->_healthPoint = 100;
    this->_name = "unknow";
    std::cout << "FragTrap : unknow have spawn" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_attackDamage = 30;
    this->_energiePoint = 100;
    this->_healthPoint = 100;
    this->_name = name;
    std::cout << "FragTrap : " << name << " have spawn" << std::endl;
    return ;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap : " << this->_name << " is dead" << std::endl;
    return ;
}

FragTrap::FragTrap(FragTrap const & copy)
{
    std::cout << "FragTrap : copy construct" << std::endl;
    *this = copy;
    return ;
}

FragTrap & FragTrap::operator=(FragTrap const & copy)
{
    if (this != &copy)
    {
        std::cout << "FragTrap : copy assignement op" << std::endl;
        this->_attackDamage = copy._attackDamage;
        this->_energiePoint = copy._energiePoint;
        this->_healthPoint = copy._healthPoint;
        this->_name = copy._name;
    }
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap : a high fives ?" << std::endl;
    return ;
}

void FragTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap : " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
    return ;
}