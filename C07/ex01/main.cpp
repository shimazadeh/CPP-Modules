#include "iter.hpp"

// int main()
// {
// 	std::string	test1[3] = {"SHIMA", "HELLO", "WHATS UP"};
// 	int			test2[5] =  {1, 2 ,3 , 4 ,5};

// 	iter(test1, 3, &function);
// 	iter(test2, 5, &function);
// }

//during corrrecction they tested with this and did not compile....you need to make the argument inside function const

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };  // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
  Awesome tab2[5];

  iter( tab, 5, print<int> );
  iter( tab2, 5, print<Awesome>);

  return 0;
}
