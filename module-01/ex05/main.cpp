#include "Karen.class.hpp"

int main(int argc, char const *argv[])
{
    Karen test;

    test.complain("debug");
    test.complain("info");
    test.complain("warning");
    test.complain("error");
    return 0;
}
