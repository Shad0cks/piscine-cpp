#include "easyfind.hpp"

int main(int argc, char const *argv[])
{
    std::list<int> test;

    test.push_back(2);
    test.push_back(9);
    test.push_back(1);
    test.push_back(334);

    try
    {
        std::cout << easyfind(test, 0) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
