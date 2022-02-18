#include "Fixed.class.hpp"

Fixed::Fixed(void) : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(Fixed const & fixedCopy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixedCopy;
    return ; 
}

Fixed::Fixed(int const number)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = number << Fixed::bits;
}

Fixed::Fixed(float const numbf)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = std::roundf(numbf * (1 << Fixed::bits));
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}


Fixed & Fixed::operator=(Fixed const & assigned)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &assigned)
        this->_value = assigned.getRawBits();
    return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & thisClass)
{
    o << thisClass.toFloat();
    return (o);
}


int Fixed::getRawBits(void) const
{
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
    return ;
}

float Fixed::toFloat() const 
{
    return ((float)this->_value / (1 << Fixed::bits));
}

int Fixed::toInt() const 
{
    return (this->_value >> Fixed::bits);
}
