#include <iostream>
#include <limits>
#include <stdexcept>
#include <string>

bool is_pritable(char const value)
{
    if (value >= 32 && value <= 126)
        return true;
    return false;
}

bool is_nb(char const * value)
{
    int i = 0;
    int letterCount = 0;
    bool pointCheck = false;
    while (value[i])
    {
        if (!(value[i] >= '0' && value[i] <= '9'))
        {
            if(value[i] == '.' && pointCheck == false)
                pointCheck = true;
            else if (i > 0 && ((value[i] == 'f' || value[i] == 'F') && 1 + i == std::string(value).length())) ;
            else if ((i == 0 && value[0] == '-') && std::string(value).length() > 1);
            else
                letterCount++;
        }
        i++;
    }
    return (letterCount > 0 ) ? (false) : (true);
}

bool specific(char const * value)
{
    if (std::string(value).compare("nan") == 0 || std::string(value).compare("-inf") == 0 || std::string(value).compare("+inf") == 0 || \
            std::string(value).compare("nanf") == 0 || std::string(value).compare("-inff") == 0 || std::string(value).compare("+inff") == 0)
        return true;
    return false;
}

void display_floating(char const * value)
{
    if (static_cast<int>(std::stof(value)) == std::stod(value))
    {
            std::cout << "double: " << std::stod(value) << ".0" << std::endl;
            std::cout << "float: " << std::stof(value) << ".0f" << std::endl;
    }
    else
    {
            std::cout << "double: " << std::stod(value) << std::endl;
            std::cout << "float: " << std::stof(value) << "f" << std::endl;
    }
}

void check_int(const char * value)
{
    int check = std::stoi(value);
    
    std::cout << "int: " << check << std::endl;
}

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        std::cout << "error nb args" << std::endl;
        return 0;
    }

    char const * value = argv[1];
    if (specific(value))
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        display_floating(value);
    }
    else if(is_nb(value))
    {
        if (is_pritable(static_cast<char>(static_cast<int>(std::stof(value)))))
            std::cout << "char: '" << static_cast<char>(static_cast<int>(std::stof(value))) << "'" << std::endl;
        else 
            std::cout << "char: Non displayable" << std::endl;
        try
        {
            check_int(value);
        }
        catch(const std::out_of_range & e)
        {
            std::cout << "int: impossible" << std::endl;
        }
        
        display_floating(value);
    }
    else if (std::string(value).length() > 1)
        std::cout << "literal error" << std::endl;
    else
    {
        if (is_pritable(value[0]))
            std::cout << "char: " << value[0] << std::endl;
        else 
            std::cout << "char : Non displayable" << std::endl;
        std::cout << "int: " << static_cast<int>(value[0]) << std::endl;
        std::cout << "double: " << static_cast<double>(value[0]) << ".0" << std::endl;
        std::cout << "float: " << static_cast<float>(value[0]) << ".0f" << std::endl;
    }
    
    return (0);
}
