
class ClapTrap
{  
    protected :
        std::string          _name;
        int                  _healthPoint;
        unsigned int         _energiePoint;
        unsigned int         _attackDamage;
        ClapTrap(void);

    public:
        
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & assing);
        ~ClapTrap(void);
        
        ClapTrap & operator=(ClapTrap const & assing);

        void attack(const std::string & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};