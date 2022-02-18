
class ScavTrap : public virtual ClapTrap
{
    public :
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & copy);
        ~ScavTrap(void);

        ScavTrap & operator=(ScavTrap const & copy);
    
        void attack(std::string const & target);
        void guardGate(void);
};