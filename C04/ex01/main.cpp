#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#define	counts 5

int main()
{
	std::cout << "--------test1: array of animals------------" << std::endl;
	{
		Animal *meta[counts];

		for (int i= 0; i < counts; i++)
		{
			if (i % 2)
				meta[i] = new Dog();
			else
				meta[i]= new Cat();
			std::cout << meta[i]->getType() << " " << std::endl;
			meta[i]->makeSound();
		}

		for (int i = 0; i < counts; i++)
			delete meta[i];
	}

	std::cout << "----------------test2: testing Animal assignment operator----------------------" << std::endl;
	{
		Animal	*a = new Dog();
		Animal	a_copy;

		Animal	*b = new Cat();
		Animal	b_copy;

		a_copy = *a;
		b_copy = *b;

		delete a;
		delete b;
	}

	return 0;
}
