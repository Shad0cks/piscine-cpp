#include "Karen.class.hpp"

typedef void(Karen::*functionPtr)(void);

Karen::Karen(/* args */)
{
    return ;
}

Karen::~Karen()
{
    return ;
}

void Karen::debug( void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
    return ;
}

void Karen::info( void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put \
enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
    return ;
}

void Karen::warning( void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming \
for years whereas you started working here since last month." << std::endl;
    return ;
}

void Karen::error( void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
    return ;
}

void Karen::complain( std::string level )
{
    int i = 0;
    std::string function_index[] = {std::string("debug"), std::string("info"), std::string("warning"), std::string("error")};
    functionPtr listFunc[] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    while (i < 4)
    {
        if (function_index[i].compare(level) == 0)
            (this->*listFunc[i])();
        i++;
    }
}