#include "Triangle.h"

void Triangle :: print() const
{
   std::cout << "Trojkat o bokach: " << a << " " << b << " " << c << std::endl;
}
double Triangle :: area() const
{
    double x=a+b+c;
    return sqrt( x *(x-a)*(x-b)*(x-c) );
}

