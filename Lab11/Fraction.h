#include <iostream>
#include "Maths.h"
#pragma once

class Fraction{

/// This class represents fraction

public:
    ///A constructor
    Fraction();
    ///A constructor with two arguments - numerator and denominator
    explicit Fraction(int _licz, int _mia);
    ///A copying constructor
    Fraction(const Fraction & f);


    /**
     * @return value of numerator
     */
    int getLicz() const;
    /**
     * @return value of denominator
     */
    int getMian() const;
    /**
     * Simplifies fraction
     */
    void simplify();
    /**
     * Operator double
     * @return decimal fraction
     */
    operator double() const;
    /**
     * Operator *
     * @param f - second fraction
     * @return product of two fractions
     */
    Fraction operator* (const Fraction & f) const
    {
        return Fraction(licz*f.getLicz(), mian*f.getMian());
    }
    /**
     * Operator *
     * @param c - simple number
     * @param f - fraction
     * @return product of fraction and simple umber
     */
    friend Fraction operator* (int c , const Fraction & f);
    /**
     * Operator + - sum two fractions
     * @param f1 - second fraction
     * @return sum of two fractions
     */
    const Fraction operator+ (const Fraction &f1) const;
    /**
     *Difference of two fractions
     * @param f1 - second fraction
     * @return difference of two fractions
     */
    Fraction operator- (const Fraction &f1) const;
    /**
     * operator << - determinate way of printing fractions
     * @param strm - ostream
     * @param f - printed fraction
     * @return ostream with relevant content
     */
    friend std::ostream& operator<< (std::ostream& strm, const Fraction &f);


private:
    int licz;
    int mian;

};



