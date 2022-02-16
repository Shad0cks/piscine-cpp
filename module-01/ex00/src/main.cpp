#include "../Zombie.class.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main(void)
{
    Zombie *temp;

    temp =  newZombie("Edouard");
    randomChump("Elise");
    temp->announce();

    delete temp;
    return 0;
}
