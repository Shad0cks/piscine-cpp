#include <iostream>
#include <string>

struct Data
{
    public :
        static int const var = 2;
        static int const var2  = 4;
};

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main(int argc, char const *argv[])
{
    Data test;
    std::cout << "Original : " << &test << std::endl;
    std::cout << "Serialize : " << serialize(&test) << std::endl;
    std::cout << "Deserialize : " << deserialize(serialize(&test)) << std::endl;

    return 0;
}
