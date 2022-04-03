#include "Span.class.hpp"

Span::Span(unsigned int maxSize)
{
    this->maxSize = maxSize;
    return ;
}

Span::Span(Span const & copy)
{
    *this = copy;
    return ;
}

Span & Span::operator=(Span const & copy)
{
    if (&copy != this)
    {
        this->liste = copy.liste;
        this->maxSize = copy.maxSize;
    }
    return *this;
}

Span::~Span(void)
{
    return ;
}

void Span::addNumber(int newNb)
{
    if (this->maxSize < this->liste.size() + 1)
        throw std::exception();
    this->liste.push_back(newNb);
}

int Span::longestSpan(void) const
{
    if (this->liste.size() <= 1)
        throw std::exception();
    return (*std::max_element(this->liste.begin(), this->liste.end()) - *std::min_element(this->liste.begin(), this->liste.end()));
}

int Span::shortestSpan(void) const
{
    int i = 0;
    if (this->liste.size() <= 1)
        throw std::exception();
    
    std::vector<int> copy = this->liste;
    std::sort(copy.begin(), copy.end());

    int rep = copy[1] - copy[0];
    std::vector<int>::iterator t;
    for ( t = copy.begin(); t != copy.end(); t++)
    {
        if (i + 1 < this->liste.size())
            rep = std::min(rep, copy[i + 1] - copy[i]);
        i++;
    }
    return (rep);
}
