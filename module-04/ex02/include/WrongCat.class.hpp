
class WrongCat : public WrongAnimal
{
	public :
		WrongCat(void);
		WrongCat(WrongCat const & copy);
		virtual ~WrongCat(void);

		WrongCat & operator=(WrongCat const & copy);

		void makeSound(void) const;

};