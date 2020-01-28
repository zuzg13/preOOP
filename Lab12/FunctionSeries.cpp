#include "FunctionSeries.h"

void FunctionSeries :: insert(std::function<double(double)> x )
{
    table.push_back(x);
}

double FunctionSeries :: calc(double _x)
{
    //rec(lin(squareroot(sinus(x))));
    int i=1;
    wyniki.clear();
    wyniki.reserve(table.size());
    wyniki[0]=table[0](_x);
    for(i=1;i<table.size();i++)
    {
        wyniki[i]= (table[i](wyniki[i-1]));
    }
    return wyniki[i-1];

}

double FunctionSeries :: operator [] (double i)
{   
    return wyniki[i];
}


