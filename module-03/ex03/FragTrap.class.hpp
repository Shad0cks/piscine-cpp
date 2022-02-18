
class FragTrap : public virtual ClapTrap
{
    public :
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const & copy);
        ~FragTrap(void);

        FragTrap & operator=(FragTrap const & copy);
        
        void attack(std::string const & target);
        void highFivesGuys(void);
};