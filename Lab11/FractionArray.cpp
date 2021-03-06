#include "FractionArray.h"


FractionArray :: FractionArray(int _size)
{
    size=_size;   
    tab=new Fraction[size];
}


FractionArray :: ~FractionArray()
{
    delete[] tab;
}

Fraction& FractionArray :: operator[](unsigned i)
{
    return tab[i];
}

const Fraction& FractionArray :: operator[](unsigned i) const
{
    return tab[i];
}




std::ostream& operator<< (std::ostream& strm, const FractionArray &_tab)
{
    strm << "[ ";
    for(int i=0;i<_tab.size;i++)
    {
        strm << _tab.tab[i] << " ";
    }
    strm << "]";
    return strm;
}