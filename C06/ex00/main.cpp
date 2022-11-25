#include "convert.hpp"

int main(int ac, char **av)
{
    (void)ac;

    if (av[1])
    {
        type    test = type(av[1]);
        try
        {
            test.evaluate();
        }
        catch(std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
}
