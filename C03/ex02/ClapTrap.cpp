#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string str)
{
	std::cout << "ClapTrap Name constructor is called" << std::endl;
	this->Name = str;
	this->Hit = 10;
	this->Energy = 10;
	this->damage = 0;
	return ;
}

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap default constructor is called" << std::endl;
	this->Name = "";
	this->Hit = 10;
	this->Energy = 10;
	this->damage = 0;
	return ;
}

ClapTrap::ClapTrap(ClapTrap &src)
{
	std::cout << "ClapTrap copy constructor is called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor is called" << std::endl;
	return ;
}

std::string		ClapTrap::getName(void)const
{
	return (this->Name);
}

int				ClapTrap::getHit(void)const
{
	return (this->Hit);
}

int		ClapTrap::getDamage(void)const
{
	return (this->damage);
}

int		ClapTrap::getEnergy(void)const
{
	return (this->Energy);
}

ClapTrap &	ClapTrap::operator=(ClapTrap &a)
{
	std::cout << "ClapTrap assignment operator is called" << std::endl;
	this->Name = a.getName();
	this->Hit = a.getHit();
	this->Energy = a.getEnergy();
	this->damage = a.getDamage();
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->Energy > 0 && this->Hit > 0)
	{
		std::cout << "ClapTrap " << this->Name << " attacks " << target <<
		" causing " << this->damage << " points of damage " << std::endl;
		this->Energy--;
	}
	else
	{
		std::cout << "ClapTrap: " << this->Name <<  " cannot do anything with energy point of "
		<< this->Energy << " and hit points of: " << this->damage << std::endl;
	}
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int	old;

	old = this->damage;
	this->damage = this->damage - amount;
	std::cout << "ClapTrap " << this->Name << " damaging " << " from damage points: "
	<< old << " to: " << this->damage << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Energy > 0 && this->Hit > 0)
	{
		this->Hit = this->Hit + amount;
		this->Energy--;
		std::cout << "ClapTrap " << this->Name << " repairs with hit points of: "
		<< this->Hit << " and energy point of: " << this->Energy << std::endl;
	}
	else
	{
		std::cout << "ClapTrap: " << this->Name << " cannot repair with energy points of " << this->Energy
		<< " and hit point of " << this->Hit << std::endl;
	}
	return ;
}

std::ostream	&operator<<(std::ostream &ostream, const ClapTrap &src)
{
	ostream << "ClapTrap: " << src.getName();
	return (ostream);
}
