#include <iostream>
#include <string>

#pragma once


using std :: string;

class Book
{
    friend class BooksShelf;
    public:
    string title; // zmienna przchowujaca tytul ksiazki
    Book();
    Book(string _title); //konstruktor klasy

};
