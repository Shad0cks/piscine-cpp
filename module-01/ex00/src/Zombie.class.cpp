#include "../Zombie.class.hpp"

Zombie::Zombie(std::string name): _name(name)
{
    return;
}

Zombie::~Zombie (void)
{
    std::cout << this->_name << ": AAArrrrrrggggg..." << std::endl;
    return;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}
