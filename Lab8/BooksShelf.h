#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include "Book.h"

using std :: string;

class BooksShelf
{   

    private:
    Book *books; //tablica ksiazek czyli klas Book
    int size; //rozmiar tablicy
    int p; //indeks ostatniej ksiazki na polce
    
    
    public:
    BooksShelf(int);  // konstruktor "klasyczny"
    BooksShelf(const BooksShelf&); // konstruktor kopiujacy
    ~BooksShelf(); // destruktor
    void add(Book); //metoda dodajaca nowa ksiazki czyli obiekty klasy Book na polke
    void remove(int); // metoda usuwajaca ksiazki (obiekty klasy Book)
    void print() const; // funkcja wypisujaca zawartosc tablicy 
        

};
