#include "../Zombie.class.hpp"
Zombie* zombieHorde( int N, std::string name );

int main(void)
{
    Zombie *first = zombieHorde(42, "Albert");

    //test
    int i = -1;
    while (++i < 42)
        first[i].announce();

    delete [] first;
    return 0;
}
