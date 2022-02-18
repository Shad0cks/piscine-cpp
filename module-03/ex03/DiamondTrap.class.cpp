#include "header.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("unknow_clap_name"),  ScavTrap("unknow") , FragTrap("unknow")
{
    this->_attackDamage =  FragTrap::_attackDamage;
    this->_energiePoint =  ScavTrap::_energiePoint;
    this->_healthPoint =   FragTrap::_healthPoint;
    this->_name = "unknow";
    std::cout << "DiamondTrap : unknow have spawn" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name) ,ScavTrap(name) 
{
    this->_attackDamage =  FragTrap::_attackDamage;
    this->_energiePoint =  ScavTrap::_energiePoint;
    this->_healthPoint =   FragTrap::_healthPoint;
    this->_name = name;
    std::cout << "DiamondTrap : " << name << " have spawn" << std::endl;
    return ;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap : " << this->_name << " is dead" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy), _name(copy._name)
{
    std::cout << "DiamondTrap : copy construct" << std::endl;
    return ;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & copy)
{
    std::cout << "DiamondTrap : copy assignement op" << std::endl;
    ClapTrap::_name      =      copy._name;
    this->_name      =          copy._name;
    return *this;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
    return ;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap : I am "<< this->_name << " and my ClapTrap is : " << ClapTrap::_name << std::endl;
}