#include <iostream>
#include <cmath>
#include <string>
#pragma once

using std :: string;

class Distance
{   
    public:
    Distance(double, double, double);
    double get_latitude() const;
    double get_longitude() const;
    double dist() const;
    
    private:
    double latitude;
    double longitude;
    double distan;

};

class Coordinates
{
    public:
    Coordinates(string, double, double);
    void print() const;
    void move(double, double);
    string name() const;
    double latitude() const;
    double longitude() const;
    Distance distance (Coordinates) const;
    Coordinates closestFrom( Coordinates, Coordinates ) const;
    private:
    string Name;
    double Longitude;
    double Latitude;
    
};


