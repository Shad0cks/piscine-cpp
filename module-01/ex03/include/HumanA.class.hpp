#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP

class HumanA
{
    public:
        HumanA(std::string name, Weapon &selfW);
        Weapon &selfWeapon;
        void attack();
    
    private:
        std::string const _name;
};

#endif