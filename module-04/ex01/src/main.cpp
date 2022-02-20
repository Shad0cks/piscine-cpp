#include "../include/header.hpp"

int main(int argc, char const *argv[])
{
	Animal * list[20];


	for (size_t i = 0; i < 20; i++)
	{
		if (i % 2 == 0)
			list[i] = new Cat();
		else
			list[i] = new Dog();
	}

	for (size_t i = 0; i < 20; i++)
	{
		delete list[i];
	}
	
	std::cout << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;
	return 0;
}
