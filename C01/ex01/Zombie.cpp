#include "Zombie.hpp"

Zombie:: Zombie(void){

	std::cout << "default constructor is called" << std::endl;
	return ;
}

Zombie:: Zombie(std::string _name){

	std::cout << "name constructor is called" << std::endl;
	this->name = _name;
}

Zombie:: ~Zombie(void){
	std::cout << "destructor is called with zombie name: ";
	std::cout << this->name << std::endl;
	return ;
}

void	Zombie::setname(std::string _name){
	this->name = _name;
}

void	Zombie::announce(void){

	std::cout << this->name << ":";
	std::cout << " BraiiiiiiinnnzzzZ..." <<std::endl;
}

