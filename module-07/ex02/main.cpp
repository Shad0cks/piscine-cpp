#include "Array.hpp"


int main(int argc, char const *argv[])
{
    Array <int>ne;
    Array <int>n(4);

    ne = n;
    ne.array[3] = 3;
    std::cout << ne[3] << std::endl;
    std::cout << ne.size() << std::endl;
    return 0;
}
