#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

# include <iostream>
# include <string>

class Bureaucrat;
#include "Bureaucrat.class.hpp"

class Form
{
    private:
        std::string const name;
        bool sign;
        int const gradeS;
        int const gradeE;
    
    public:
        Form(std::string name, int gradeS, int gradeE);
        Form(Form const & copy);
        ~Form(void);

        Form & operator=(Form const & copy);

        std::string getName(void) const;
        int getGradeE(void) const;
        int getGradeS(void) const;
        bool getStatus(void) const;

        void beSigned(Bureaucrat & actor);

    class GradeTooHighException : public std::exception 
    {
        virtual char const * what() const throw()
        {
            return "Grade is too high";
        }
    };

    class GradeTooLowException : public std::exception
    {
        virtual char const * what() const throw()
        {
            return "Grade is too low";
        }
    };
};

std::ostream & operator<<(std::ostream & o, Form const & form);

#endif