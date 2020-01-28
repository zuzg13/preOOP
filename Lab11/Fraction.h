#include <iostream>
#include "Maths.h"
#pragma once

class Fraction{

    private:
    int licz;
    int mian;
    
    public:
    Fraction();
    Fraction(int, int);
    int getLicz() const;
    int getMian() const;
    void simplify() noexcept;
    operator double() const noexcept;
    Fraction operator* (const Fraction & f) const noexcept
    {
        return Fraction(licz*f.getLicz(), mian*f.getMian());
    }
    friend inline Fraction operator* (int c , const Fraction & f);
    Fraction operator+ (const Fraction &) const;
    Fraction operator- (const Fraction &) const;
    friend std::ostream& operator<< (std::ostream& strm, const Fraction &f);

};

inline Fraction operator* (int c, const Fraction & f)
{
    return Fraction(c * f.getLicz(),f.getMian());
}

