#include "../Zombie.class.hpp"

void randomChump( std::string name )
{
    Zombie newZ(name);

    newZ.announce();
    return;
}