#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <string>
#include <iostream>

class Zombie    
{
    public:
        Zombie();
        ~Zombie(void);
        void announce(void) const;
        void set_name(std::string name);

    private :
        std::string _name;
};

#endif