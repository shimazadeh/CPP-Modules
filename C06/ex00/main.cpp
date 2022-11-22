#include "convert.hpp"

int main(int ac, char **av)//input of 0 and nan have a problem fix later
{
    (void)ac;
    // std::cout << "Float Range: "
    //    << std::numeric_limits<float>::min() << " / "
    //    << std::numeric_limits<float>::max() << '\n';
    //    std:: cout << std::numeric_limits<int>::infinity() << '\n';
    // std::cout << "Int Range: "
    //    << std::numeric_limits<int>::min() << " / "
    //    << std::numeric_limits<int>::max() << '\n';
    // std::cout << "Double Range: "
    //    << std::numeric_limits<double>::min() << " / "
    //    << std::numeric_limits<double>::max() << '\n';
    if (av[1])
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
}
