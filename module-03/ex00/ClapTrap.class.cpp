#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap(void) : _healthPoint(10), _energiePoint(10), _name("unknow"), _attackDamage(0)
{
    std::cout << "unknow : have spawn" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string name) : _healthPoint(10), _energiePoint(10), _name(name), _attackDamage(0)
{
    std::cout << name << " : have spawn" << std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const & copy)
{
    std::cout << "copy construct" << std::endl;
    *this = copy;
    return ;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << this->_name << " : is dead" << std::endl;
    return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & clapt)
{
    if (this != &clapt)
    {
        std::cout << "ClapTrap copy assignement op" << std::endl;
        this->_attackDamage = clapt._attackDamage;
        this->_energiePoint = clapt._energiePoint;
        this->_healthPoint = clapt._healthPoint;
        this->_name = clapt._name;
    }
    return *this;
}


void ClapTrap::attack(const std::string& target)
{
    if (_energiePoint <= 0)
        return ;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energiePoint--;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << this->_name << " take " << amount << " damage" << std::endl;
    this->_healthPoint -= amount;
    return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energiePoint <= 0)
        return ;
    std::cout << this->_name << " get " << amount << " health point" << std::endl;
    this->_healthPoint += amount;
    this->_energiePoint--;
    return ;
}

