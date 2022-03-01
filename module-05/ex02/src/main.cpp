#include "../headers/header.hpp"

int main(int argc, char const *argv[])
{
    Form * prout;
    Bureaucrat actor("billy", 20);
    prout = new PresidentialPardonForm("jardin");

    actor.signForm(*prout);
    actor.executeForm(*prout);
    
    delete prout;
    return 0;
}