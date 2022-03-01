
#include "../headers/header.hpp"
typedef void(Intern::*functionPtr)(void);

Intern::Intern(void)
{
    return ;
}

Intern::Intern(Intern const & copy)
{
    return ;
}

Intern & Intern::operator=(Intern const & copy)
{
    return *this;
}

Intern::~Intern(void)
{
    return ;
}

Form * Intern::makeForm(std::string formType, std::string target)
{
    int find = -1;
    char const * listeForm[] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    Form * listeFormC[3];

    listeFormC[0] = new RobotomyRequestForm(target);
    listeFormC[1] = new ShrubberyCreationForm(target);
    listeFormC[2] = new PresidentialPardonForm(target);
    
    for (size_t i = 0; i < 3; i++)
    {
        if (formType.compare(listeForm[i]) == 0)
            find = i;
        else
            delete listeFormC[i];
        
        if (i == 2 && find == -1)
            throw Intern::FormNotExist();
    }
    std::cout << "Intern creates " << formType << std::endl;
    return (listeFormC[find]);
}