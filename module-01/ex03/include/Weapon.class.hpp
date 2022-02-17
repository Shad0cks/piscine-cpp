class Weapon 
{

    public:
        Weapon(std::string Wname);
        std::string &getType(void);
        void setType(std::string value);

    private:
        std::string _type;

};