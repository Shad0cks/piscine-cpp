#include "header.hpp"


int main(int argc, char const *argv[])
{
    DiamondTrap mutant("Obump");
    DiamondTrap mutantUnknow;
    
    mutantUnknow = mutant;
    mutantUnknow.whoAmI();
    mutantUnknow.attack("bil");
    return 0;
}
