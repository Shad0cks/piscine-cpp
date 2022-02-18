#include "ClapTrap.class.hpp"

int main(int argc, char const *argv[])
{
    ClapTrap clapTrap("PIVOX");

    clapTrap.attack("Eric");
    clapTrap.beRepaired(20);
    clapTrap.takeDamage(8);
    clapTrap.attack("Hug");
    return 0;
}
