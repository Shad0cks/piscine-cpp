#include <iostream>

class Fixed
{

public:
    Fixed(void);
    Fixed(Fixed const & fixedCopy);
    ~Fixed(void);
    Fixed & operator=(Fixed const & assigned);
    int getRawBits(void) const;
    void setRawBits(int const raw);


private:
    int _value;
    static int const bits = 8;
};
