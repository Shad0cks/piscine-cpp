#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "../header.hpp"

class PhoneBook
{
    Contact c_list[8];

    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void add_c(void);
        void search_c(void) const;
        void header_scr(void) const;
    
    private:
        int index_c = 0;
        int count_c = 0;
};

#endif