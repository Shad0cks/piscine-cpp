#include <iostream>
#include <stack>

template <typename Type>
class MutantStack : public std::stack<Type>
{
    public :
        MutantStack(void) { };
        MutantStack(MutantStack const & copy) { };
        virtual ~MutantStack(void) { };

        MutantStack & operator=(MutantStack const & copy)
        {
            if (&copy != this)
                std::stack<Type>::operator=(copy);
            return (*this);
        }

        typedef typename std::stack<Type>::container_type::iterator iterator;

        iterator begin(void) {return this->c.begin();};
        iterator end(void) {return this->c.end();};
};