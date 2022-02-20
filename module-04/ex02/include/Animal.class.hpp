
class Animal
{
	public :
		Animal(void);
		Animal(std::string name);
		Animal(Animal const & copy);
		virtual ~Animal(void);

		Animal & operator=(Animal const & copy);

		virtual void makeSound(void) const = 0;

		std::string getType(void) const;

	protected :
		std::string type;
};