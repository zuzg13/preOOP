#include "Fraction.h"

Fraction :: Fraction(int _licz, int _mian)
{
    licz=_licz;
    mian=_mian;
}

Fraction :: Fraction()
{
    licz=1;
    mian=1;
}

int Fraction :: getLicz() const 
{
    return licz;
}
int Fraction :: getMian() const
{
    return mian;
}

void Fraction :: simplify() noexcept
{
    int d=Maths::gcd(licz, mian);
    if(d!=1)
    {
        licz=licz/d;
        mian=mian/d;
    }
}   

Fraction :: operator double() const noexcept
{
    return static_cast<double>(licz)/static_cast<double>(mian);
}

/*Fraction operator* (int c, const Fraction & f)
{
    int a = c * f.getLicz();
    int b= f.getMian();
    Fraction f3(a,b);
    return f3;

}*/
Fraction Fraction :: operator+ (const Fraction &f1) const 
{
    int a = licz*f1.getMian() + mian*f1.getLicz();
    int b = mian * f1.getMian();
    Fraction f3(a,b);

    return f3;
}
Fraction Fraction :: operator- (const Fraction &f1) const
{
    int a = licz*f1.getMian() - mian*f1.getLicz();
    int b = mian * f1.getMian();
    Fraction f3(a,b);

    return f3;
}

std::ostream& operator<< (std::ostream& strm, const Fraction &f)
{
    return (strm << f.getLicz() << "/" << f.getMian());
}