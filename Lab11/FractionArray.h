#include <iostream>
#include "Fraction.h"

class FractionArray
{
public:
    /**
     * A constructor, allocate memory for array
     * @param _size - size of array
     */
    explicit FractionArray(int _size);
    /**
     * A deconstructor, free memory of array
     */
    ~FractionArray();

    /**
     * Operaotr []
     * @param i
     * @return
     */
    Fraction& operator [](unsigned i);
    const Fraction& operator [](unsigned i ) const;
    friend std::ostream& operator<< (std::ostream& strm, const FractionArray &_tab);

private:
    Fraction *tab;
    int size;

};
