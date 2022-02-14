#include "../../header/header.hpp"

PhoneBook::PhoneBook(void)
{
    return;
}

PhoneBook::~PhoneBook(void)
{
    return;
}

void PhoneBook::add_c(void)
{
    int i = 0;
    Contact new_c;
    std::string rep;
    
    std::cout << std::endl;
    while (i < 5)
    {
        std::cout << "Enter " << new_c.fields_name[i] << " : ";
        
        std::cin >> rep;
        if (rep.length() == 0)
        {
            std::cout << "# Corrupted input !" << std::endl;
            return;
        }
        new_c.infos[i] = rep;
        i++;
    }
    if (this->index_c >= 8)
    {
        this->index_c = 0;
    }
    this->c_list[this->index_c] = new_c;
    this->index_c++;
    this->count_c++;
    std::cout << "# Contact added !" << std::endl;
    std::cout << std::endl;
    return;
}

void PhoneBook::header_scr(void) const
{
    int i = 0;
    int j;
    
    while (i < 8 && i < this->count_c)
    {    
        std::cout << std::setw(9) << "index : " << i + 1;
        i++;
        if (i < 8 && i < this->count_c)
            std::cout << " |";
    }
    std::cout << std::endl;
    i = 0;
    while (i < 3)
    {
        j = 0;
        while (j < 8 && j < this->count_c)
        {
            if (this->c_list[j].infos[i].length() >= 10)
                std::cout << std::setw(9) << this->c_list[j].infos[i].substr(0, 9) << ".";
            else
                std::cout << std::setw(10) << this->c_list[j].infos[i];
            j++;
            if (this->count_c > 1 && j < this->count_c && j < 8)
                std::cout << " |";
        }
        std::cout << std::endl;
        i++;
    }
}

void PhoneBook::search_c(void) const
{
    int i = -1;
    int j = 0;
    if (this->count_c <= 0)
    {
        std::cout << "Empty Contact list !" << std::endl;
        std::cout << std::endl;
        return;
    }
    std::cout << std::endl;
    header_scr();
    std::cout << std::endl;
    std::cout << "Enter the contact index : ";
    std::cin >> i;
    if (std::cin.fail() || (i <= 0 || i >= 9))
    {
        std::cin.clear();
        std::cout << "Wrong index !\n" << std::endl;
        return;
        std::cout << std::endl;
        
    }
    if (i > this->count_c)
    {
        std::cout << "Contact not found !" << std::endl;
        std::cout << std::endl;
        return;
    }
    std::cout << std::endl;
    while (j < 5)
    {
        std::cout << this->c_list[i - 1].fields_name[j] << " : " << this->c_list[i - 1].infos[j] << std::endl;
        j++;
    }
    std::cout << std::endl;
    return;
}