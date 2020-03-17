#include "Circle.h"

double Circle  :: area() const
{
    return (M_PI * r * r);
}


void Circle :: print() const
{
    std::cout << "Kolo o promieniu: " << r << std::endl;
}

