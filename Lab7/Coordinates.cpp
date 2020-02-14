#include "Coordinates.h"

Distance :: Distance(double _latitude, double _longitude, double _distan)
{
    latitude=_latitude;
    longitude=_longitude;
    distan=_distan;
}
double Distance :: get_latitude() const
{
    return latitude;
}
double Distance :: get_longitude() const 
{
    return longitude;
}
double Distance :: dist() const
{
    return distan;
}

Coordinates :: Coordinates(string _name, double _latitude, double _longitude)
{
    Name=_name;
    Latitude=_latitude;
    Longitude=_longitude;
}

void Coordinates :: print() const 
{
    std :: cout << Name <<" ";
    if((Latitude)>=0)
        std :: cout << Latitude<<"N ";
    else
        std :: cout << (Latitude)*(-1.0)<<"S ";
    if((Longitude)>=0)
        std :: cout << Longitude<<"E ";
    else
        std :: cout << (Longitude)*(-1.0)<<"W ";

    std :: cout << std :: endl;
    
}



void Coordinates :: move(double lat, double longi)
{
    Latitude+=lat;
    Longitude+=longi;
}

string Coordinates :: name() const
{
    return (Name);
}
double Coordinates :: latitude() const
{
    return (Latitude);
}
double Coordinates :: longitude() const
{
    return (Longitude);
}

Distance Coordinates :: distance(Coordinates city) const
{
    
    double x=Latitude - city.Latitude;
    double y=Longitude - city.Longitude;
    double d=hypot(x,y);
    Distance dystans(x, y, d);
    return dystans;
     
}
Coordinates Coordinates :: closestFrom(Coordinates city1, Coordinates city2) const
{
    double a;
    double b;
    Distance dystans1=distance(city1);
    Distance dystans2=distance(city2);
    a=dystans1.dist();
    b=dystans2.dist();

    if(a<=b)
        return city1;
    else
        return city2;


}









