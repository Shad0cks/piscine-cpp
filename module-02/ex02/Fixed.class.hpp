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

    //op == / != // ...

    bool operator>(Fixed const & f2);
    bool operator<(Fixed const & f2);
    bool operator>=(Fixed const & f2);
    bool operator<=(Fixed const & f2);
    bool operator==(Fixed const & f2);
    bool operator!=(Fixed const & f2);

    // op + / * - 

    Fixed operator+(Fixed const & f2);
    Fixed operator-(Fixed const & f2);
    Fixed operator*(Fixed const & f2);
    Fixed operator/(Fixed const & f2);

    // op incr

    Fixed operator++(int);
    Fixed & operator++();
    Fixed & operator--();
    Fixed operator--(int);


    static const Fixed & min(Fixed const & f1, Fixed const & f2);
    static Fixed & min(Fixed & f1, Fixed & f2);

    static const Fixed & max(Fixed const & f1, Fixed const & f2);
    static Fixed & max(Fixed & f1, Fixed & f2);

private:
    int _value;
    static int const bits = 8;

};

std::ostream & operator<<(std::ostream & o, Fixed const & thisClass);
