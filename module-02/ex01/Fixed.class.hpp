#include <iostream>
#include <cmath>

class Fixed
{

public:
    //construct
    Fixed(void);
    Fixed(Fixed const & fixedCopy);
    Fixed(int const number);
    Fixed(float const numbf);

    ~Fixed(void);

    Fixed & operator=(Fixed const & assigned);

    //get / set
    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt(void) const;

private:
    int _value;
    static int const bits = 8;

};

std::ostream & operator<<(std::ostream & o, Fixed const & thisClass);
