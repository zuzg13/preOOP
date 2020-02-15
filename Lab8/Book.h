#include <iostream>
#include <string>

#pragma once


using std :: string;


/**
 * represent book
 */
class Book
{
public:
    Book(string _title="Unknown"): title(_title) {} /// A constructor
    string GetTitle(){return title;}
private:
    string title; /// title

};
