
#include "Data.hpp"

uintptr_t	serialize(Data	*ptr)
{
	uintptr_t	result;

	result = reinterpret_cast<uintptr_t>(ptr);
	return (result);
}

Data	*deserialize(uintptr_t	raw)
{
	Data	*result;

	result = reinterpret_cast<s_Data*>(raw);

	return (result);
}

int	main(void)
{
	Data	*ptr = new Data;
	uintptr_t num;
	Data	*ptr_new;

	ptr->data = "shima";

	num = serialize(ptr);
	ptr_new = deserialize(num);

	std::cout << "the original is: " << ptr << std::endl;
	std::cout << "the deserialized: " << ptr_new << std::endl;

	delete ptr;
}
