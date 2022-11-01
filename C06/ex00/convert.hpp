#ifndef _CONVERT_HPP
#define _CONVERT_HPP

#include <iostream>
#include <string.h>
#include <math.h>
#include <iomanip>

class type
{
    public:
        type(void);
        type(std::string str);
        ~type(void);

    void    print_type(void);
    bool    if_digit(void);
    bool    checklimit(void);
    void    evaluate(void);
    void    setundisplayable(void);
    void    setasnumber(void);

    class TypeDoesNotExist : public std::exception
    {
        public:
            virtual const char * what() const throw()
            {
                return ("the argument is not a c++ literal");
            }
    };
    // class NonDisplayable : public std::exception
    // {
    //     public:
    //         virtual const char * what() const throw()
    //         {
    //             return ("Non displayable");
    //         }
    // };
    private:
        std::string    str;
        int     num_i;
        double  num_d;
        float   num_f;
        char    c;
};
#endif
