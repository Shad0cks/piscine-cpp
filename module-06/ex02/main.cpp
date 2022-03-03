#include <iostream>
#include <string>

class Base{public : virtual ~Base(void){return;};};
class A : public Base {public:A(void){std::cout << "create A" << std::endl;};};
class B : public Base {public:B(void){std::cout << "create B" << std::endl;};};
class C : public Base {public:C(void){std::cout << "create C" << std::endl;};};

Base * generate(void)
{
    std::srand(std::time(0));
    int randomNB = std::rand() % 3;

    switch (randomNB)
    {
        case 0:
            return (new A);
            break;

        case 1:
            return (new B);
            break;

        case 2:
            return (new C);
            break;
    }
    return (nullptr);
}

void identify(Base * p)
{
    A * res = dynamic_cast<A *>(p);;
    B * res1 = dynamic_cast<B *>(p);;
    if (res != NULL)
        std::cout << "A" << std::endl;
    else if (res1 != NULL)
        std::cout << "B" << std::endl;
    else
        std::cout << "C" << std::endl;
}

void identify(Base & p)
{
    try
    {
        A & res = dynamic_cast<A &>(p);;
        std::cout << "A" << std::endl;
        return ;
    }
    catch (std::bad_cast & e){}
    try
    {
        B & res = dynamic_cast<B &>(p);;
        std::cout << "B" << std::endl;
        return ;
    }
    catch (std::bad_cast & e)
    {
        std::cout << "C" << std::endl;
    }
}

int main(int argc, char const *argv[])
{
    Base * hello = generate();
    identify(hello);
    return 0;
}
