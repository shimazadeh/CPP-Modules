#include "conversion.hpp"

type::type(void)
{

}

type::type(char *str)
{

}

type::~type(void)
{

}

void    type::print_type(void)
{
    std::cout << "int: " << this->num_i << std::endl;
    std::cout << "double: " << this->num_d << std::endl;
    std::cout << "float: " << this->num_f << std::endl;
    std::cout << "char: " << this->c << std::endl;
    return;
}

bool    type::if_digit(void)
{
    int len;

    len = strlen(this->str);
    for(int i = 0; i < len; i++)
    {
        if (this->str[i] => 0 && this->str[i] <= 9)
            i++;
        else if (this->str[0] == '-' || this->str[0] == '+' || this->str[i] == '.')
            i++;
        else
            return false;
    }
    return true;
}

void    type::evaluate(void)
{
    if (!this->str)
        this.setundisplayable(void);
    else if (this.checklimit)
        this.setoutoflimit(void);
    else if (this.isdigit)
        this.setasnumber(void);
    else
        this.setasstring(void);
    return ;
}

void    type::setundisplayable(void)
{
    this->num_i = 0;
    this->num_d = 0;
    this->num_f = 0;
    this->c = 0;
}

void    type::setasnumber(void)
{
    this->num_i = std::stoi(this->str);
    this->num_d = std::stod(this->str);
    this->num_f = std::stof(this->str);
    this->c = '*';
}