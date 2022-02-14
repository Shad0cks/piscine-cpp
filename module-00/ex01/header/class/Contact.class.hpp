#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include "../header.hpp"

class Contact
{
    
    public:
        Contact(void);
        ~Contact(void);

        static std::string fields_name[5];
        std::string infos[5];

};

#endif