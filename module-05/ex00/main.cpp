#include "Bureaucrat.class.hpp"

int main(int argc, char const *argv[])
{
    Bureaucrat hello("Billy", 134);
    hello.incGrade(133);
    std::cout << hello << std::endl;
    return 0;
}