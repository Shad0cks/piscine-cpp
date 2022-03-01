#ifndef PRESIDENTIALPARDONFORM_CLASS_HPP
# define PRESIDENTIALPARDONFORM_CLASS_HPP

#include <iostream>
#include <string>
#include "Form.class.hpp"
class Form;

class PresidentialPardonForm : public Form
{

    private :
        std::string target;
    
    public :
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const & copy);
        virtual ~PresidentialPardonForm(void);

        virtual PresidentialPardonForm & operator=(PresidentialPardonForm const & copy);

        std::string getTarget(void) const;

        virtual void execute(Bureaucrat const & actor) const;

};

#endif