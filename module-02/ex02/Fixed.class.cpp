#include "Fixed.class.hpp"

Fixed::Fixed(void) : _value(0)
{
    return ;
}

Fixed::Fixed(Fixed const & fixedCopy)
{
    *this = fixedCopy;
    return ; 
}

Fixed::Fixed(int const number)
{
    this->_value = number << Fixed::bits;
}

Fixed::Fixed(float const numbf)
{
    this->_value = std::roundf(numbf * (1 << Fixed::bits));
}

Fixed::~Fixed(void)
{
    return ;
}


Fixed & Fixed::operator=(Fixed const & assigned)
{
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


// ======================== op =========================

// comapre 

bool Fixed::operator>(Fixed const & f2)
{
    return (this->_value > f2.getRawBits());
}

bool Fixed::operator<(Fixed const & f2)
{
    return (this->_value < f2.getRawBits());
}

bool Fixed::operator>=(Fixed const & f2)
{
    return (this->_value >= f2.getRawBits());
}

bool Fixed::operator<=(Fixed const & f2)
{
    return (this->_value <= f2.getRawBits());
}

bool Fixed::operator!=(Fixed const & f2)
{
    return (this->_value != f2.getRawBits());
}

bool Fixed::operator==(Fixed const & f2)
{
    return (this->_value == f2.getRawBits());
}

// op maths

Fixed Fixed::operator+(Fixed const & f2)
{
    return ( Fixed (this->toFloat() + f2.toFloat()));
}

Fixed Fixed::operator-(Fixed const & f2)
{
    return ( Fixed (this->toFloat() - f2.toFloat()));
}

Fixed Fixed::operator*(Fixed const & f2)
{
    return ( Fixed (this->toFloat() * f2.toFloat()));
}

Fixed Fixed::operator/(Fixed const & f2)
{
    if (f2.toInt() > 0)
        return ( Fixed (this->toFloat() / f2.toFloat()));
    throw std::runtime_error("divide by 0");
}

// incr


Fixed & Fixed::operator++()
{
    this->_value++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed copy(*this);
    ++this->_value;
    return (copy);
}

Fixed & Fixed::operator--()
{
    this->_value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed copy(*this);
    --this->_value;
    return (copy);
}

Fixed const & Fixed::min(Fixed const & f1, Fixed const & f2)
{
    if (f1.getRawBits() < f2.getRawBits())
        return (f1);
    else 
        return (f2);
}

Fixed & Fixed::min(Fixed & f1, Fixed & f2)
{
    if (f1.getRawBits() < f2.getRawBits())
        return (f1);
    else 
        return (f2);
}

Fixed const & Fixed::max(Fixed const & f1, Fixed const & f2)
{
    if (f1.getRawBits() > f2.getRawBits())
        return (f1);
    else 
        return (f2);
}

Fixed & Fixed::max(Fixed & f1, Fixed & f2)
{
    if (f1.getRawBits() > f2.getRawBits())
        return (f1);
    else 
        return (f2);
}