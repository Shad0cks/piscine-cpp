
class HumanA
{
    public:
        HumanA(std::string name, Weapon &selfW);
        Weapon &selfWeapon;
        void attack();
    
    private:
        std::string const _name;
};