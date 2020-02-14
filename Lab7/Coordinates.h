#include <iostream>
#include <cmath>
#include <string>
#pragma once

using std :: string;

class Distance
{   
public:
    /**
     * A constructor.
     */
    Distance(double _latitude, double _longitude, double _distan);
    /**
     * return latitude
     * @return  latitude
     */
    double get_latitude() const;
    /**
     * return longitude
     * @return longitude
     */
    double get_longitude() const;
    /**
     * return distance
     * @return distan
     */
    double dist() const;
    
private:
    double latitude; /// private variable latitude
    double longitude; /// private variable longitude
    double distan; /// private variable distance

};

class Coordinates
{
public:
    /**
     * A constructor
     * @param _name - name of city
     * @param _latitude - latitude
     * @param _longitude - longitude
     */
    Coordinates(string _name, double _latitude, double _longitude);
    /**
     * print information about the city
     */
    void print() const;
    /**
     * add values to coordinates
     * @param lat - added latitude
     * @param longi - added longitude
     */
    void move(double lat, double longi);
    /**
     * @return Name;
     */
    string name() const;
    /**
     * @return Latitude
     */
    double latitude() const;
    /**
     * @return Longitude
     */
    double longitude() const;
    /**
     * calculate distance between two cities
     * @return object od class Distance with distance between to cities
     */
    Distance distance (Coordinates city) const;
    /**
     * return object representing nearest one of city1 and city2
     * @return object with nearer city
     */
    Coordinates closestFrom( Coordinates city1, Coordinates city2) const;
private:
    string Name; ///name of city
    double Longitude; ///Longitude
    double Latitude; /// Latitude
    
};


