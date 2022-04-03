#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

class HumanB
{
    public:
        HumanB (std::string name);
        void attack (void);
        void setWeapon(Weapon &newW);
        Weapon *selfWeapon;
    
    private:
        std::string const _name;
};

#endif