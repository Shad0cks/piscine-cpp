#include "Karen.class.hpp"

int main(int argc, char const *argv[])
{
    Karen test;

    test.complain(std::string(argv[1]));
    return 0;
}
