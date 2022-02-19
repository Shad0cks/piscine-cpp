
class WrongAnimal
{
	public :
		WrongAnimal(void);
		WrongAnimal(std::string name);
		WrongAnimal(WrongAnimal const & copy);
		virtual ~WrongAnimal(void);

		WrongAnimal & operator=(WrongAnimal const & copy);

		void makeSound(void) const;

		std::string getType(void) const;

	protected :
		std::string type;
};