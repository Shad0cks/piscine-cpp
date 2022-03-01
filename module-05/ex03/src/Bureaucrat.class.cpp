#include "../headers/header.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->_grade  > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << name << " created !" <<  std::endl;
    return ; 
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy) : _name(copy.getName()), _grade(copy.getGrade())
{
    if (this->_grade  < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->_grade  > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << this->_name << " copy by init !" << std::endl;
    return ; 
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & copy)
{
    if (this != &copy)
    {
        if (copy.getGrade() < 1)
            throw Bureaucrat::GradeTooHighException();
        else if (copy.getGrade() > 150)
            throw Bureaucrat::GradeTooLowException();
        std::cout << this->_name << " copy by op !" << std::endl;
        this->_grade = copy.getGrade();
    }
    return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << this->_name << " die !" << std::endl;
    return ;
}

int Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

void Bureaucrat::incGrade(int incBy)
{
    if (this->_grade  - incBy < 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade -= incBy;
}

void Bureaucrat::decGrade(int decBy)
{
    if (this->_grade  + decBy > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade += decBy;
}

std::string Bureaucrat::getName(void) const
{
    return (this->_name);
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

std::ostream & operator<<(std::ostream & o , Bureaucrat const & bu)
{
    o << bu.getName() << ", bureaucrat grade " << bu.getGrade();
    return (o);
}

void Bureaucrat::signForm(Form & form)
{
    try 
    {
        form.beSigned(*this);
        std::cout << this->_name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception const & error)
    {
        std::cout << this->_name  << " couldn’t sign " << form.getName() << " because " << error.what() << std::endl;
    }           
}

void Bureaucrat::executeForm(Form const & form)
{
    try
    {
        form.execute(*this);
        std::cout << this->getName() << " execute " << form.getName() << std::endl;
    }
    catch (std::exception const & e)
    {
        std::cout << this->_name  << " couldn’t execute " << form.getName() << " because " << e.what() << std::endl;
    }
}