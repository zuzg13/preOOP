#include "Rectangle.h"


double Rectangle :: area() const
{
    return a*b;
}

void Rectangle :: print() const
{
    std::cout << "Prostokat o bokach: " << a << " " << b << std::endl;
}

void print(const Shape &b)
{
    b.print();
}


