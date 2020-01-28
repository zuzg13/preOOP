#include "Vector2D.h"

Vector2D :: Vector2D()
{
    x=0.0;
    y=0.0;
    count++;
}   

Vector2D :: Vector2D(const Vector2D& v2)
{   
    v2.print("copying");
    x=v2.x;
    y=v2.y;
    count++;
}

Vector2D :: Vector2D(Vector2D&& v2) : x(std::exchange(v2.x, 0.)), y(std::exchange(v2.y, 0.))
{
    print("moving");
    count++;
}

Vector2D :: ~Vector2D()
{
    count--;
}   


Vector2D Vector2D :: fromCarthesian(double x_, double y_)
{
    Vector2D v;
    v.x=x_;
    v.y=y_;
    return v;
}
Vector2D Vector2D :: fromPolar(double r_, double phi_)
{
    Vector2D v;
    v.x=r_*cos((phi_*2*M_PI)/360.);
    v.y=r_*sin((phi_*2*M_PI)/360.);
    return v;
}
Vector2D Vector2D :: add(const Vector2D& v2) const
{
    Vector2D v;
    v.x=x+v2.x;
    v.y=y+v2.y;
    return v;
}
double Vector2D :: dot(const Vector2D& v2) const
{
    double m;
    m=x*(v2.x) + y*(v2.y);
    return m;
}
void Vector2D :: print(string napis) const
{
    std :: cout << napis <<"("<< x << ", " << y << ")" << std :: endl;

}

int Vector2D :: count=0;




