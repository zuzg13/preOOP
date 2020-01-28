#include "Coordinates.h"

Distance :: Distance(double _latitude, double _longitude, double _distan)
{
    this->latitude=_latitude;
    this->longitude=_longitude;
    this->distan=_distan;
}
double Distance :: get_latitude() const
{
    return this->latitude;
}
double Distance :: get_longitude() const 
{
    return this->longitude;
}
double Distance :: dist() const
{
    return this->distan;
}

Coordinates :: Coordinates(string _name, double _latitude, double _longitude)
{
    this->Name=_name;
    this->Latitude=_latitude;
    this->Longitude=_longitude;
}

void Coordinates :: print() const 
{
    std :: cout << this->Name<<" ";
    if((this->Latitude)>=0)
    {
        std :: cout << this->Latitude<<"N ";
    }
    else
    {
        std :: cout << (this->Latitude)*(-1.0)<<"S ";
    }
    if((this->Longitude)>=0)
    {
        std :: cout << this->Longitude<<"E ";
    }
    else
    {
        std :: cout << (this->Longitude)*(-1.0)<<"W ";
    }
    std :: cout << std :: endl;
    
}



void Coordinates :: move(double lat, double longi)
{
    this->Latitude+=lat;
    this->Longitude+=longi;
}

string Coordinates :: name() const
{
    return (this->Name);
}
double Coordinates :: latitude() const
{
    return (this->Latitude);
}
double Coordinates :: longitude() const
{
    return (this->Longitude);
}

Distance Coordinates :: distance(Coordinates city) const
{
    
    double x=this->Latitude - city.Latitude;
    double y=this->Longitude - city.Longitude;
    double d=hypot(x,y);
    Distance dystans(x, y, d);
    return dystans;
    
     
}
Coordinates Coordinates :: closestFrom(Coordinates city1, Coordinates city2) const
{
    double a;
    double b;
    Distance dystans1=this->distance(city1);
    Distance dystans2=this->distance(city2);
    a=dystans1.dist();
    b=dystans2.dist();

    if(a<=b)
        return city1;
    else
        return city2;


}









