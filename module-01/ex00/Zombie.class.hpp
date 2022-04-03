#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <string>
#include <iostream>

class Zombie    
{
    public:
        Zombie(std::string name);
        ~Zombie(void);
        void announce(void);
    
    private :
        std::string const _name;
};

#endif