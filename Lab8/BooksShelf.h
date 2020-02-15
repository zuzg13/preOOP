#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include "Book.h"

using std :: string;

class BooksShelf
{
    public:
    ///A constructor
    BooksShelf(int _size=1)
    {
        size=_size;
        books=new Book[size];
        p=0;
    }
    ///A copying constrtuctor
    BooksShelf(const BooksShelf&);
    /// A destructor
    ~BooksShelf();
    /**
     * Add new "books" to shelf
     *
     * @param b - new book
     */
    void add(Book b);
    /**
     * Delete "books" from shelf and move other books
     *
     * @oaram p - number of book to delete
     */
    void remove(int n);
    /**
     * Print all books from shelf
     */
    void print() const;

private:
    Book *books;///Shelf with books - array of Book objects
    int size; ///size of shelf/array
    int p; ///index of last book on shelf
        

};
