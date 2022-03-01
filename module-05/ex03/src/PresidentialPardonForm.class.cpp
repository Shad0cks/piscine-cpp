#include "../headers/header.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target) : target(target), Form("PresidentialPardonForm", 25, 5)
{
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy) : target(copy.getTarget()), Form(copy)
{
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & copy)
{
    if (&copy != this)
        this->target = copy.getTarget();
    return *this;
}

std::string PresidentialPardonForm::getTarget(void) const
{
    return this->target;
}

void PresidentialPardonForm::execute(Bureaucrat const & actor) const
{
    if (actor.getGrade() > this->getGradeE())
        throw Form::GradeTooLowException();
    if (this->getStatus() == false)
        throw Form::FormNotSigned();
    std::cout << this->getTarget() << " avez etes pardonnez par Zaphod Beeblebrox" << std::endl;
}