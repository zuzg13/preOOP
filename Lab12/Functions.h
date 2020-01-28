#include <iostream>
#include <cmath>

#pragma once

class Linear {
    
    public:
    Linear(double _a =1., double _b=1.): a(_a) , b(_b) {}
    double operator () (double) const;
    //std::function<double(double)> lin=Linear();

    private:
    double a;
    double b;

};

class Sin {
    
    public:

    Sin(double _a=1., double _b=1.){  lins=Linear(_a, _b); };
    double operator () (double) const;
    //std::function<double(double)>sinus=Sin();
    
    private:
    Linear lins;

};


class Sqrt{
    
    public:
    Sqrt()=default;
    double operator () (double) const;
    //std::function<double(double)> squareroot=Sqrt();
    
};


