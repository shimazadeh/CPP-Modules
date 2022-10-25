#ifndef _AMATERIA_HPP
#define _AMATERIA_HPP

class AMateria
{
	protected:

	public:
		AMateria(std::string const &type);
		std::string const & getType()const;

		virtual AMateria* 	clone() const = 0;
		virtual vooid		use(ICharacter& target);
};

#endif
