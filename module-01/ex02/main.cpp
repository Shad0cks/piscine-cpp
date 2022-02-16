#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Adresse de la string en mémoire : " << &str << " | ";
    std::cout << "Adresse stockée dans stringPTR : " << stringPTR << " | ";
    std::cout << "Adresse stockée dans stringREF : " << &stringREF << std::endl;

    std::cout << "Valeur de la string : " << str << " | ";
    std::cout << "Valeur pointée par stringPTR : " << *stringPTR << " | ";
    std::cout << "Valeur pointée par stringREF : " << stringREF << std::endl;
    return 0;
}
