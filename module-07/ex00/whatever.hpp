#include <iostream>
#include <string>

template<typename Type>
void swap(Type & v1, Type & v2)
{
    Type const temp = v1;
    v1 = v2;
    v2 = temp;
    return ;
}

template<typename Type>
Type const & min(Type const & v1, Type const & v2)
{
    return (v1 < v2) ? v1 : v2;
}

template<typename Type>
Type const & max(Type const & v1, Type const & v2)
{
    return (v1 > v2) ? v1 : v2;
}