
class Brain
{

    public:
        Brain(void);
        Brain(Brain const & copy);
        virtual ~Brain(void);

        Brain & operator=(Brain const & copy);

        std::string ideas[100];

};