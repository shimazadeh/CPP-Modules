#ifndef _CONVERT_HPP
#define _CONVERT_HPP

#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <limits>
#include <stddef.h>
#include <stdlib.h>

class type
{
    public:
        type(std::string str);
        ~type(void);

        void    print_type(void);
        bool    if_int(void);
        bool    if_float(void);
        bool    if_double(void);
        bool    if_char(void);

        bool    checklimit(void);
        void    evaluate(void);
        void    setfrom_int(void);
        void    setfrom_double(void);
        void    setfrom_float(void);
        void    setfrom_char(void);

        class TypeDoesNotExist : public std::exception
        {
            public:
                virtual const char * what() const throw()
                {
                    return ("the argument is not of any type");
                }
        };

    private:
        type(void);
        std::string    str;
        int             num_i;
        double          num_d;
        float           num_f;
        char            c;
        int             flag;
};
#endif
