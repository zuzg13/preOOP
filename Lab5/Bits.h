#include <iostream>

typedef struct bity { // struktura bity przechowujaca tablice z bitami i ilosci bitow
    int tab[32];
    int length;
}Bits;

void set(Bits *, int *, int); // funkcja przekazuja sekwencje bitow do struktury, z odpowiedniej tablicy, o podanej ilosc bitow
void print(const Bits*); // funckja wypisujaca strukture
Bits add_up(Bits*, Bits*); // funkcja dodajaca do siebie diwe liczby w systemie dwojkowym
int to_decimal(const Bits*); // funkcja zwracajaca wartosc liczby w systemie dziesietnym
void bit_and(Bits*, Bits*); // funkcja koniunkcji struktury i maski
void bit_xor(Bits*, Bits*); // funkcja alternatywy wykluczajacej struktury i maski
