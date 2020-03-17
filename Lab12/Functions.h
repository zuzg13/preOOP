#include <iostream>
#include <cmath>

#pragma once

class Linear {
/// This class represents linear function y = a*x + b
public:
    ///A constructor
    Linear(double _a =1., double _b=1.): a(_a) , b(_b) {}
    /**Overloading operator ()
     *
     * @param _x - value of x
     * @return value of y
     */
    double operator () (double _x) const;


private:
    double a; ///a
    double b; ///b

};

class Sin {

    /// This class represents sinus function  - sin(a*x +b)
    
public:
    ///A constructor
    Sin(double _a=1., double _b=1.){  lins=Linear(_a, _b); }
    /**
     * Overloading operator ()
     *
     * @param _x - value of x
     * @return value of sin(a*_x + b)
     */
    double operator () (double _x) const;

    
private:
    Linear lins;

};


class Sqrt{
    
public:
    Sqrt()=default;
    double operator () (double) const;

    
};


