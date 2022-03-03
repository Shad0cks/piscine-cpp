#include "iter.hpp"

void aff(int value)
{
    std::cout << value << std::endl;
}

int main(int argc, char const *argv[])
{
    int liste[] = {2,4,2,5,978,2};
    iter(liste, 6, aff);
    return 0;
}
