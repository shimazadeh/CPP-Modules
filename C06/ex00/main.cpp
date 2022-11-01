#include "convert.hpp"

int main(int ac, char **av)//input of 0 and nan have a problem fix later
{

    type    variable(av[1]);

    try
    {
        variable.evaluate();
        variable.print_type();
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    // if (av[1])
    // {
    //     float   num_f = std::numeric_limits<float>::infinity();
    //     double  test = std::numeric_limits<double>::infinity();

    //     // num_f = atof(av[1]);
    //     std::cout << "int: " << atoi(av[1]) << std::endl;
    //     std::cout << "double: " << -test << std::endl;
    //     std::cout << "float: " << -num_f << std::endl;
    //     std::cout << "char: " << '*' << std::endl;
    //     std::cout << av[1] << std::endl;
    // }
}
