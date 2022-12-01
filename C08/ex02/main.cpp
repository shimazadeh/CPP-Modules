#include "MutantStack.hpp"

int main()
{
	std::cout << "-----------testing iterator with algo---------------" << std::endl;
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(8);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}

	std::cout << "-----------testing const_iterator---------------" << std::endl;
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		mstack.push(3);
		mstack.push(8);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::const_iterator it = mstack.begin();
		MutantStack<int>::const_iterator ite = mstack.end();
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	std::cout << "-----------testing reverse iterator---------------" << std::endl;
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		mstack.push(3);
		mstack.push(8);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::reverse_iterator it = mstack.rbegin();
		MutantStack<int>::reverse_iterator ite = mstack.rend();
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	std::cout << "-----------testing const_reverse iterator---------------" << std::endl;
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		mstack.push(3);
		mstack.push(8);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::const_reverse_iterator it = mstack.rbegin();
		MutantStack<int>::const_reverse_iterator ite = mstack.rend();
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	return 0;
}
