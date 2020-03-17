#include <iostream>
#include <cmath>
#include "Rectangle.h"

class Circle : public Shape{

public:
    explicit Circle(double _r=1, double _x=0., double _y=0.): Shape(_x, _y), r(_r) {}
    void print() const;
    double area() const;

protected:
    double r;

};

