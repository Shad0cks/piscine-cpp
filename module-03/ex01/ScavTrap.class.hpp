
class ScavTrap : public ClapTrap
{
    public :
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & copy);
        ~ScavTrap(void);

        ScavTrap & operator=(ScavTrap const & copy);

        void attack(const std::string& target);
        void guardGate(void);
};