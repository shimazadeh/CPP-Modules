#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#define	counts 10

int main()
{
	Animal *meta[counts];

	for (int i= 0; i < counts/2; i++)
	{
		if (i < 2 )
			meta[i] = new Dog();
		else
			meta[i]= new Cat();
		std::cout << meta[i]->getType() << " " << std::endl;
		// std::cout << meta[i]->makeSound() << " " << std::endl;
	}

	for (int i= counts -1 ; i >= 0; i--)
		delete meta[i];
return 0;
}
