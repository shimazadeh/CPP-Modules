#ifndef _CONVERSION_HPP
#define _CONVERSION_HPP

#include <iostream>

class type
{
    public:
        type(void);
        type(char *str);
        ~type(void);

    void    print_type(void);
    void    if_digit(void);
    void    if_valid(void);
    
    private:
        char    *str;
        int     num_i;
        double  num_d;
        float   num_f;
        char    c;

};
#endif