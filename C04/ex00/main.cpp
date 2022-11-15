#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal * k = new WrongCat();
	const WrongAnimal * a = new WrongAnimal();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << a->getType() << " " << std::endl;

	meta->makeSound();
	j->makeSound();
	i->makeSound();
	k->makeSound();
	a->makeSound();

	delete meta;
	delete j;
	delete i;
	delete k;
	delete a;

	return 0;
}
