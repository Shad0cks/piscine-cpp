#ifndef ROBOTOMYREQUESTFORM_CLASS_HPP
# define ROBOTOMYREQUESTFORM_CLASS_HPP

#include <iostream>
#include <string>
#include "Form.class.hpp"
class Form;

class RobotomyRequestForm : public Form
{

    private :
        std::string target;
    
    public :
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const & copy);
        virtual ~RobotomyRequestForm(void);

        virtual RobotomyRequestForm & operator=(RobotomyRequestForm const & copy);

        std::string getTarget(void) const;

        virtual void execute(Bureaucrat const & actor) const;

};

#endif