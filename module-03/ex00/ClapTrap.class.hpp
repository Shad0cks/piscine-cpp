#include <iostream>
#include <string>

class ClapTrap
{  
    private :
        std::string          _name;
        int                  _healthPoint;
        unsigned int         _energiePoint;
        unsigned int         _attackDamage;
    
    public:
        
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & assing);
        ~ClapTrap(void);
        
        ClapTrap & operator=(ClapTrap const & assing);

        void attack(const std::string & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};