#include "../Zombie.class.hpp"

Zombie::Zombie(void) : _name("undefined")
{
    return ;
}

Zombie::~Zombie (void)
{
    std::cout << this->_name << ": AAArrrrrrggggg..." << std::endl;
    return ;
}

void Zombie::announce(void) const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}

void Zombie::set_name(std::string name)
{
    this->_name = name;
    return ;
}