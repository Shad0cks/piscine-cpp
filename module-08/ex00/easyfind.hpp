#include <iostream>
#include <string>
#include <list>

template <typename Type>
int easyfind(Type & liste, int search)
{
    int i = 0;
    std::list <int>::const_iterator start;
    std::list <int>::const_iterator end = liste.end();

    for (start = liste.begin(); start != end; start++)
    {
        if (*start == search)
            return (i);
        i++;
    }
    throw std::exception();
    return 0;   
}