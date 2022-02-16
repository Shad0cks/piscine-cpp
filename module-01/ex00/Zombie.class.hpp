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