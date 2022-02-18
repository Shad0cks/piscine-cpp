
class DiamondTrap : public FragTrap,  public ScavTrap
{
    public :
        DiamondTrap(void);
        explicit DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const & copy);
        virtual ~DiamondTrap(void);

        DiamondTrap & operator=(DiamondTrap const & copy);

        void attack(const std::string& target);
        void whoAmI();

    private :
        std::string _name;
};