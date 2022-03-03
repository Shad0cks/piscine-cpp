#include <iostream>
#include <string>

template<typename Type, typename funcDef>
void iter(Type * list, int listSize, funcDef * func)
{
    int i = 0;
    while (i < listSize)
    {
        func(list[i]);
        i++;
    }
    return ;
}
