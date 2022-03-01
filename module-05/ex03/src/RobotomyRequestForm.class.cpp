#include "../headers/header.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string target) : target(target), Form("RobotomyRequestForm", 72, 45)
{
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy) : target(copy.getTarget()), Form(copy)
{
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & copy)
{
    if (&copy != this)
        this->target = copy.getTarget();
    return *this;
}

std::string RobotomyRequestForm::getTarget(void) const
{
    return this->target;
}

void RobotomyRequestForm::execute(Bureaucrat const & actor) const
{
    if (actor.getGrade() > this->getGradeE())
        throw Form::GradeTooLowException();
    if (this->getStatus() == false)
        throw Form::FormNotSigned();
    std::cout << "======= BBZZzzzzzzzzz ===========" << std::endl;
    std::srand(time(0));
    if (std::rand() % 2 == 1)
        std::cout << this->getTarget() << " successful robotomized !" << std::endl;
    else
        std::cout << this->getTarget() << " robotomization fail !" << std::endl;
}