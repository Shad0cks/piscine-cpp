#include <iostream>
#include <vector>
# include <algorithm>
# include <set>

class Span
{
    public:

        Span(unsigned int maxSize);
        Span(Span const & copy);
        virtual ~Span(void);

        std::vector<int> liste; 
        unsigned int maxSize;

        void addNumber(int newNb);

        template <typename Type>
        void addNumber(Type begin, Type end)
        {
            if (this->maxSize < std::distance(begin, end) + this->liste.size())
                throw std::exception();
            this->liste.insert(this->liste.end(), begin, end);
        }

        int longestSpan(void) const;
        int shortestSpan(void) const;


        Span & operator=(Span const & copy);
};  