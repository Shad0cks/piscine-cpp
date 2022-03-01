#include "Form.class.hpp"

Form::Form(std::string name, int gradeS, int gradeE) : name(name), gradeE(gradeE), gradeS(gradeS)
{
    if (this->gradeE < 1 || this->gradeS < 1)
        throw Form::GradeTooHighException();
    if (this->gradeE > 150 || this->gradeS > 150)
        throw Form::GradeTooLowException();
    this->sign = false;
    return ;
}

Form::Form(Form const & copy) : name(copy.getName()), gradeE(copy.getGradeE()), gradeS(copy.getGradeS())
{
    if (this->gradeE < 1 || this->gradeS < 1)
        throw Form::GradeTooHighException();
    if (this->gradeE > 150 || this->gradeS > 150)
        throw Form::GradeTooLowException();
    *this = copy;
    return ;
}

Form & Form::operator=(Form const & copy)
{
    if (this != &copy)
        this->sign = copy.sign;
    return (*this);
}

int Form::getGradeE(void) const
{
    return (this->gradeE);
}

int Form::getGradeS(void) const
{
    return (this->gradeS);
}

bool Form::getStatus(void) const
{
    return (this->sign);
}

std::string Form::getName(void) const
{
    return (this->name);
}

std::ostream & operator<<(std::ostream & o, Form const & form)
{
    o << form.getName() << " = status : " << form.getStatus() << " / Grade needed for Exec : " << form.getGradeE() << " / Grade needed for Sign : " << form.getGradeS();
    return (o);
}

Form::~Form(void)
{
    return ;
}

void Form::beSigned(Bureaucrat & actor)
{
    if (actor.getGrade() <= this->gradeS)
        this->sign = true;
    else
        throw Form::GradeTooLowException();
}