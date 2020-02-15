#include "BooksShelf.h"


BooksShelf :: BooksShelf(const BooksShelf& copy)
{
    size=copy.size;
    books=new Book[size];
    for(int i=0; i<size; i++)
    {
        books[i]=copy.books[i];
    }
    p=size-1;

}
void BooksShelf :: add(Book b)
{
    books[p]=b;
    p++;
}
void BooksShelf :: remove(int n)
{
    for(int i=n;i<size-1;i++)
    {
       books[i]=books[i+1];
    }
    size=size-1;
}
void BooksShelf :: print() const
{
    int pom=0;
    for(int i=0; i<size; i++)
    {
        if(books[i].GetTitle().length()>pom)
            pom=books[i].GetTitle().length();
    }
    for(int i=0; i<size; i++)
    {   
        div_t pom2=div(pom-books[i].GetTitle().length(), 2);
        for(int j=0;j<pom2.quot;j++)
        {
            std :: cout << " ";
        }
        std :: cout << books[i].GetTitle();
        for(int j=0;j<pom2.quot;j++)
        {
            std :: cout << " ";
        }
        std :: cout << std :: endl;
    }
}
BooksShelf :: ~BooksShelf()
{
    delete [] books;
}
