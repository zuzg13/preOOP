#include <iostream>
#include "Rectangle.h"
#include <cmath>


class Triangle : public Shape {

public:
    explicit Triangle(double _a=1., double _b=1., double _c=1., double _x=0., double _y=0.) : Shape(_x, _y), a(_a), b(_b), c(_c) {}
    double area() const;
    void print() const;

protected:
    double a;
    double b;
    double c;
};

