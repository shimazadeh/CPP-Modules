#include "Zombie.hpp"

Zombie:: Zombie(void){

	return ;
}

Zombie:: ~Zombie(void){
	std::cout << "destructor is called with zombie name";
	std::cout << this->name << std::endl;
	return ;
}

void	Zombie::announce(void){

	std::cout << this->name << ":";
	std::cout << " BraiiiiiiinnnzzzZ..." <<std::endl;
}

