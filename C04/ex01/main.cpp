#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	const Animal *meta[20];

	for (int i= 0; i < 20; i++)
	{
		if (i % 2 == 0)
			meta[i] = new Dog();
		else
			meta[i]= new Cat();
		std::cout << meta[i].getType() << " " << std::endl;
		std::cout << meta[i].makeSound() << " " << std::endl;
	}

	for (int i= 19; i >= 0; i--)
		delete meta[i];
return 0;
}
