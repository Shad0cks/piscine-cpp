#include "Form.class.hpp"
#include "Bureaucrat.class.hpp"

int main(int argc, char const *argv[])
{
    Bureaucrat hello("Billy", 134);
    Form hey("hello", 15, 2);
    std::cout << hello << std::endl;
    std::cout <<  hey << std::endl;
    hello.signForm(hey);
    return 0;
}