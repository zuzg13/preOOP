#include <iostream>
#include "Fraction.h"

class FractionArray
{
    private:
    Fraction *tab;
    int size;

    public:
    explicit FractionArray(int);
    ~FractionArray();
    void print() const;
    Fraction& operator [](unsigned) const;
    friend std::ostream& operator<< (std::ostream& strm, const FractionArray &_tab);
};
