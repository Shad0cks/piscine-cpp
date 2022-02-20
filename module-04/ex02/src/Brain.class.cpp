#include "../include/header.hpp"

Brain::Brain(void)
{
    std::cout << "new brain created !" << std::endl;
    return ;
}

Brain::Brain(Brain const & copy)
{
    std::cout << "brain : copy init " << std::endl;
    *this = copy;
}

Brain::~Brain(void)
{
    std::cout << "brain destroy !" << std::endl;
    return ;
}


Brain & Brain::operator=(Brain const & copy)
{
    std::cout << "brain :  copy op " << std::endl;
    if (&copy != this)
    {
        for (size_t i = 0; i < 100; i++)
        {
            this->ideas[i] = copy.ideas[i];
        }
        
    }
    return *this;
}