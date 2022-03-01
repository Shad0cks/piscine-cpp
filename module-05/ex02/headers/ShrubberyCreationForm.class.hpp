#ifndef SHRUBBERYCREATIONFORM_CLASS_HPP
# define SHRUBBERYCREATIONFORM_CLASS_HPP

#include <iostream>
#include <string>
#include "Form.class.hpp"
class Form;

class ShrubberyCreationForm : public Form
{

    private :
        std::string target;
    
    public :
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const & copy);
        virtual ~ShrubberyCreationForm(void);

        virtual ShrubberyCreationForm & operator=(ShrubberyCreationForm const & copy);

        std::string getTarget(void) const;

        virtual void execute(Bureaucrat const & actor) const;

};

#endif