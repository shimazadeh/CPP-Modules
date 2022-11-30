#ifndef _MUTANTSTACK_HPP
# define _MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack<T>(void){ return;};
		MutantStack<T>(const MutantStack<T> &other) { *this = other;};
		~MutantStack<T>(void){ return;};

		MutantStack<T> &operator=(const MutantStack<T> &src) { return (*this);};

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin(void) {return (this->c.begin());};
		iterator	end(void){return (this->c.end());};

	private:
};

#endif
