#include <iostream>
#include <cstdlib>
#include <cstring>

void prepareList(char***, int**, int);
/**<\fn funkcja alokujaca pamięć dla startowej ilości studentów (2)
 *
 * @param name - wskaźnik na tablicę imion i nazwisk - którą w tej funkcji alokujemy
 * @param year - wskaźnik na tablicę roku studiów
 * @param cap - zmienna pomocnicza przechowująca dla ilu studentów jest alokowana początkowo pamięć
 */
void addStudent(int* , int * , char*** , int ** , const char *, const char *, int);
/**< \fn funkcja dodająca studentów do listy
 *
 * @param number -wskaznik na zmienną, informujaca nas ilu studentow zostalo juz wpisanych do listy
 * @param cap - zmienna informujaca na ile studentow zostala zaalokowana pamiec w liscie, w funkcji @prepareList
 * @param names - wskaznik na tablice imion i nazwisk
 * @param years - wskaznik na tablie lat studiow
 * @param fname - zmienna przechowujaca imie dodawanego studenta
 * @param sname - zmienna przechowujaca nazwisko dodawanego studenta
 * @param y - zmienna przechowujaca rok studiow dodawanego studenta
 */
void printListContent (int, char **);
void printAllListContent (int , char **, int *);
void clearStudents (int * , int *, char ***, int **);
