#include "../header/header.hpp"

int main(void)
{
    std::string answer;
    PhoneBook Annulaire;

    while (1)
    {
        std::cout << "Awesome Phone Book -> ";
        std::cin >> answer;
        if (answer.compare("EXIT") == 0)
            break;
        else if (answer.compare("SEARCH") == 0)
            Annulaire.search_c();
        else if (answer.compare("ADD") == 0)
            Annulaire.add_c();
    }
    std::cout << "# EXIT" << std::endl;
    return (0);
}