#include "../headers/header.hpp"

int main(int argc, char const *argv[])
{
    Form * prout;
    Intern randomIntern;
    Bureaucrat actor("billy", 3);
    prout = randomIntern.makeForm("shrubbery creation", "Bender");

    actor.signForm(*prout);
    actor.executeForm(*prout);
    
    delete prout;
    return 0;
}