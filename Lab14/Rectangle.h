#include <iostream>
#pragma once


class Shape{

public:
    explicit Shape(double _x = 0, double _y = 0) : x(_x), y(_y) {}
    virtual void print() const
    {std::cout<< "I DON'T KNOW WHAT IT IS " << std::endl;}
    virtual double area() const
    {return 0.0;}
    friend void print(const Shape &b);


protected:
    double x, y;

};


class Rectangle : public Shape{

public:
    explicit Rectangle(double _a=1., double _b=1., double _x=0, double _y=0) : Shape(_x, _y), a(_a), b(_b) {}
    void print() const;

    double area() const;

protected:
    double a;
    double b;

};


