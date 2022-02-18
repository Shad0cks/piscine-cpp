#include "header.hpp"

ClapTrap::ClapTrap(void) : _healthPoint(10), _energiePoint(10), _name("unknow"), _attackDamage(0)
{
    std::cout << "ClapTrap : unknow : have spawn" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string name) : _healthPoint(10), _energiePoint(10), _name(name), _attackDamage(0)
{
    std::cout << "ClapTrap : " << name << " : have spawn" << std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const & copy)
{
    std::cout << "ClapTrap : copy construct" << std::endl;
    *this = copy;
    return ;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap : " << this->_name << " : is dead" << std::endl;
    return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & clapt)
{
    if (this != &clapt)
    {
        std::cout << "ClapTrap : copy assignement op" << std::endl;
        this->_attackDamage = clapt._attackDamage;
        this->_energiePoint = clapt._energiePoint;
        this->_healthPoint = clapt._healthPoint;
        this->_name = clapt._name;
    }
    return *this;
}


void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap : " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap : " << this->_name << " take " << amount << " damage" << std::endl;
    return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap : " << this->_name << " get " << amount << " health point" << std::endl;
    return ;
}

