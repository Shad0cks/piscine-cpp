#include "Span.class.hpp"

int main(int argc, char const *argv[])
{
    
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    Span spp = Span(5);
    spp.addNumber(43);
    spp.addNumber(sp.liste.begin(), sp.liste.end());

    for (std::vector<int>::iterator i = spp.liste.begin(); i != spp.liste.end(); i++)
    {
        std::cout << *i << std::endl;
    }
    

    return 0;
}
