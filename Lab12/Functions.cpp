#include "Functions.h"



double Linear :: operator () (double _x) const
{
    return a*_x + b;
}

double Sin :: operator () (double _x) const
{
    return sin(lins(_x));
}

double Sqrt :: operator () (double _x) const
{
    return sqrt(_x);
}

