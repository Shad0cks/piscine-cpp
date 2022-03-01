#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

#include <iostream>
#include <string>
#include "Form.class.hpp"
class Form;

class Bureaucrat
{
    public :
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const & copy);
        virtual ~Bureaucrat(void);

        Bureaucrat & operator=(Bureaucrat const & copy);

        int getGrade(void) const;
        void incGrade(int incBy);
        void decGrade(int decBy);

        void signForm(Form & form);
        void executeForm(Form const & form);
        std::string getName(void) const;

    class GradeTooHighException : public std::exception
    {
        virtual char const * what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        virtual char const * what() const throw();
    };

    private: 
                const std::string _name;
                int _grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & cop);

#endif