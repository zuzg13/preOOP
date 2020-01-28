#include <iostream>
#include <cstdlib>
#include <cmath>


typedef double (*DataPtr);
typedef void (*functionPtr)(DataPtr);

DataPtr initializeData(const int); // funkcja alokująca pamiec dla tablicy i nadajaca jej odpowiednie wartosci
void printSeries(DataPtr , DataPtr); // funkcja wypisujaca wartosci funkcji od wskaznika start do wskaznika end
void tripple(DataPtr); //funkcja potrajajaca wartosc na ktora wskazuje wskaznik 
void squareroot (DataPtr); // funkcja zwracajaca wartosc pierwiastka wartosci na ktora wksazuje wskaznik
void executeFunction(functionPtr, DataPtr, DataPtr); /*funkcja wykonujaca funkcje znajdujaca sie pod wskaznikiem na funkcje, z 
 parametrami wskazanymi przez wskazniki start i end */
void clearData(DataPtr); // funkcja zwalniajaca pamiec dla tablicy
void add_one(DataPtr); //funkcja zwiekszajaca o jeden wartosci, z zakresu od wartosci ze wskaznika start do end
