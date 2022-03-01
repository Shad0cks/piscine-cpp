#include <iostream>
#include <string>

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