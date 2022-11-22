#include "convert.hpp"

type::type(void)
{
    this->str = "";
    this->num_i = -1;
    this->num_d = -1;
    this->num_f = -1;
    this->c = -1;
    this->flag = 0;
}

type::type(std::string src)
{
    this->str = src;
    this->num_i = -1;
    this->num_d = -1;
    this->num_f = -1;
    this->c = -1;
    this->flag = 0;
}

type::~type(void)
{
    std::cout << "destructor is called" << std::endl;
}

void    type::print_type(void)
{
    std::cout << std::fixed << std::setprecision(1);

    std::cout << "char: ";
    if (this->c >= 0 && this->c <= 31)
        std::cout << "Non displayable" << std::endl;
    else if (this->c < 0)
        std::cout << "impossible" << std::endl;
    else
        std::cout << this->c << std::endl;

    std::cout << "int: ";
    if (flag == 1 || ((this->str).length() >= 10 && (this->str).compare("2147483647") > 0))
        std::cout << "impossible" << std::endl;
    else if ((this->str).length() >= 11 && (this->str).compare("-2147483648") > 0)
        std::cout << "impossible" << std::endl;
    else if (this->num_i >= std::numeric_limits<int>::min() && this->num_i <= std::numeric_limits<int>::max())
        std::cout << this->num_i << std::endl;

    std::cout << "float: " << this->num_f << 'f' << std::endl;
    std::cout << "double: " << this->num_d << std::endl;

    return;
}

bool    type::if_digit(void)
{
    int len;

    len = (this->str).length();
    for(int i = 0; i < len; i++)
    {
        if (i == 0 && (this->str[i] == '-' || this->str[i] == '+'))
            i++;
        else if (this->str[i] >= '0' && this->str[i] <= '9')
            i++;
        else if (i == len - 1 && (this->str[i] == 'f' && !(this->str[i + 1])))
            return true;
        else if (this->str[i] == '.')
            i++;
        else
            return false;
    }
    return true;
}

bool    type::checklimit(void)
{
    if (!(this->str).compare("-inff") || !(this->str).compare("-inf"))
    {
        flag = 1;
        this->num_d = std::numeric_limits<double>::infinity();
        this->num_d = -1 * (this->num_d);
        this->num_f = std::numeric_limits<float>::infinity();
        this->num_f = -1 * (this->num_f);
        return true;
    }
    else if (!(this->str).compare("+inff") || !(this->str).compare("+inf"))
    {
        flag = 1;
        this->num_d = std::numeric_limits<double>::infinity();
        this->num_f = std::numeric_limits<float>::infinity();
        return true;
    }
    if (!(this->str).compare("nanf") || !(this->str).compare("nan"))
    {
        flag = 1;
        this->num_i = std::numeric_limits<int>::quiet_NaN();
        this->num_d = std::numeric_limits<double>::quiet_NaN();
        this->num_f = std::numeric_limits<float>::quiet_NaN();
        return true;
    }
    return false;
}

void    type::evaluate(void)
{
    if (this->str == "")
    {
        this->setundisplayable();
    }
    if (this->checklimit())
    {
        return ;
    }
    else if (this->if_digit() || this->flag)
    {
        this->setasnumber();
    }
    else
        throw (type::TypeDoesNotExist());
    return ;
}

void    type::setundisplayable(void)
{
    this->num_i = 0;
    this->num_d = 0.0;
    this->num_f = 0.0f;
    this->c = 0;
}

void    type::setasnumber(void)
{
    this->num_i = atoi(this->str.c_str());
    this->num_d = atof(this->str.c_str());
    this->num_f = atof(this->str.c_str());
    this->c = num_i;


    // this->num_i = std::stoi(this->str);
    // this->num_d = std::stod(this->str);
    // this->num_f = std::stof(this->str);
    // this->c = num_i;
}
