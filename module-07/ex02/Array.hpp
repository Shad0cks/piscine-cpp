#include <iostream>
#include <string>

template<typename Type>

class Array
{
    public :
        Type * array;
        int arr_size;

        Array(void)
        {
            this->array = new Type [1];
            this->array[0] = 0;
            this->arr_size = 1;
            return ; 
        }

        Array(unsigned int size)
        {
            int i = 0;
            this->array = new Type [size];
            while (i < size)
            {
                this->array[i] = 0;
                i++;
            }
            this->arr_size = size;
        }

        Array(Array const & copy)
        {
            int i = 0;
            this->array = new Type [copy.arr_size];
            while (i < copy.arr_size)
            {
                this->array[i] = copy.array[i]; 
                i++;
            }
            this->arr_size = copy.arr_size;
            return ;
        }

        ~Array(void)
        {
            delete [] this->array;
        }

        Array & operator=(Array const & copy)
        {
            int i = 0;
            if (&copy != this)
            {
                delete [] this->array;
                i = 0;
                this->array = new Type [copy.arr_size];
                while (i < copy.arr_size)
                {
                    this->array[i] = copy.array[i]; 
                    i++;
                }
                this->arr_size = copy.arr_size;
            }
            return *this;
        }
        Type & operator[](unsigned int index)
        {
            if (index >= this->arr_size)
                throw std::exception();
            return this->array[index];
        }

        int size(void) const
        {
            return this->arr_size;
        }
};