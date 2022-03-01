#include "../headers/header.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : target(target), Form("ShrubberyCreationForm", 145, 137)
{
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy) : target(copy.getTarget()), Form(copy)
{
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & copy)
{
    if (&copy != this)
        this->target = copy.getTarget();
    return *this;
}

std::string ShrubberyCreationForm::getTarget(void) const
{
    return this->target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & actor) const
{
    if (actor.getGrade() > this->getGradeE())
        throw Form::GradeTooLowException();
    if (this->getStatus() == false)
        throw Form::FormNotSigned();
    std::ofstream myFile;

    std::string nameFile = this->getTarget() + "_shrubbery";

    myFile.open(nameFile.c_str());
    if (myFile.is_open())
    {
        for (size_t i = 0; i < 3; i++)
        {
        
            myFile <<        
                "         v" << std::endl <<
                "        >X<" << std::endl <<
                "         A" << std::endl <<
                "        d$b" << std::endl <<
                "      .d\\$$b." << std::endl <<
                "    .d$i$$\\$$b." << std::endl <<
                "       d$$@b" << std::endl <<
                "      d\\$$$ib" << std::endl <<
                "    .d$$$\\$$$b" << std::endl <<
                "  .d$$@$$$$\\$$ib." << std::endl <<
                "      d$$i$$b" << std::endl <<
                "     d\\$$$$@$b" << std::endl <<
                "  .d$@$$\\$$$$$@b." << std::endl <<
                ".d$$$$i$$$\\$$$$$$b." << std::endl <<
                "        ###"<< std::endl <<
                "        ###"<< std::endl <<
                "        ###" << std::endl << std::endl;
        }
        myFile.close();
    }
}