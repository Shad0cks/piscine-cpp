
class Dog : public Animal
{
	public :
		Dog(void);
		Dog(Dog const & copy);
		virtual ~Dog(void);

		Dog & operator=(Dog const & copy);

		void makeSound(void) const;
	
	private:
		Brain *hisBrain;
};