#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP

#include <iostream>
#include <string>
#include "Form.class.hpp"

class Form;

class Intern
{   
    public :
        Intern(void);
        Intern(Intern const & copy);
        virtual ~Intern(void);

        Intern & operator=(Intern const & copy);

        Form * makeForm(std::string formType, std::string target);

    private :

        class FormNotExist : public std::exception
        {
            virtual const char * what() const throw()
            {
                return "Form not found";
            }
        };
};

#endif