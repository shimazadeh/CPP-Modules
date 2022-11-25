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
    if (this->flag == 1 || ((this->str).length() >= 10 && (this->str).compare("2147483647") > 0))
        std::cout << "impossible" << std::endl;
    else if ((this->str).length() >= 11 && (this->str).compare("-2147483648") > 0)
        std::cout << "impossible" << std::endl;
    else if (this->num_i >= std::numeric_limits<int>::min() && this->num_i <= std::numeric_limits<int>::max())
        std::cout << this->num_i << std::endl;

    std::cout << "float: " << this->num_f << 'f' << std::endl;
    std::cout << "double: " << this->num_d << std::endl;
    return;
}

bool    type::if_int(void)
{
    int len;

    len = (this->str).length();
    for(int i = 0; i < len; i++)
    {
        if (i == 0 && (this->str[i] == '-' || this->str[i] == '+'))
        {}
        else if (this->str[i] >= '0' && this->str[i] <= '9')
        {}
        else
            return false;
    }
    return true;
}

bool    type::if_float(void)
{
    int len;
    bool flag;

    flag = false;
    len = (this->str).length();
    for(int i = 0; i < len; i++)
    {
        if (i == 0 && (this->str[i] == '-' || this->str[i] == '+'))
        {}
        else if (this->str[i] >= '0' && this->str[i] <= '9')
        {}
        else if (flag && i == len - 1 && this->str[i] == 'f' && !(this->str[i + 1]))
            return true;
        else if (!flag && this->str[i] == '.' && this->str[i + 1] >= '0' && this->str[i + 1] <= '9')
        {
            flag = true;
        }
        else
            return false;
    }
    return flag;
}

bool    type::if_double(void)
{
    int len;
    bool flag;

    flag = false;
    len = (this->str).length();
    for(int i = 0; i < len; i++)
    {
        if (i == 0 && (this->str[i] == '-' || this->str[i] == '+'))
        {}
        else if (this->str[i] >= '0' && this->str[i] <= '9')
        {}
        else if (!flag && this->str[i] == '.' && this->str[i + 1] >= '0' && this->str[i + 1] <= '9')
        {
            flag = true;
        }
        else
        {
            return false;
        }
    }
    return flag;
}

bool    type::if_char(void)
{
    int len;

    len = (this->str).length();
    if (len == 1 && this->str[0] >= 'a' && this->str[0] <= 'z')
        return true;
    else if (len == 1 && this->str[0] >= 'A' && this->str[0] <= 'Z')
        return true;
    return false;
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
    if (if_char())
        setfrom_char();
    else if (if_double())
        setfrom_double();
    else if (if_float())
        setfrom_float();
    else if (if_int())
        setfrom_int();
    else if (checklimit())
    {
    }
    else
        throw (type::TypeDoesNotExist());

    print_type();
}

void    type::setfrom_char(void)
{
    std::cout << "setting from char" << std::endl;
    this->c = str[0];
    this->num_i = this->c;
    this->num_d = static_cast<double>(this->num_i);
    this->num_f = static_cast<float>(this->num_i);
}

void    type::setfrom_double(void)
{
    std::cout << "setting from double" << std::endl;
    this->num_d = strtod(this->str.c_str(), NULL);
    this->num_f = static_cast<float>(this->num_d);
    this->num_i = static_cast<int>(this->num_d);
    this->c = num_i;
}

void    type::setfrom_float(void)
{
    std::cout << "setting from float" << std::endl;
    this->num_f = strtof(this->str.c_str(), NULL);
    this->num_d = static_cast<double>(this->num_f);
    this->num_i = static_cast<int>(this->num_f);
    this->c = num_i;
}

void    type::setfrom_int(void)
{
    std::cout << "setting from int" << std::endl;
    this->num_i = atoi(this->str.c_str());
    this->num_d = static_cast<double>(this->num_i);
    this->num_f = static_cast<float>(this->num_i);
    this->c = num_i;
}
