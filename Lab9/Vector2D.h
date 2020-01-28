#include <iostream>
#include <string>
#include <cmath>


using std :: string;

class Vector2D
{   
    private:
    double x; //wspolrzedna x
    double y; //wspolrzedna y

    public:
    Vector2D(); //konskruktor "klasyczny"
    Vector2D(const Vector2D&); // konstruktor kopiujacy
    Vector2D(Vector2D&&); // konstruktor move
    ~Vector2D(); //dekonstruktor
    static Vector2D fromCarthesian(double, double); //funkcja zwracajaca obiekt VEector2D, ze wspolrzednymi kartezjanskimi jako argumentami
    static Vector2D fromPolar(double, double); //funkcja zwracajaca obietk Vector2D ze wspolrzednymi biegunowymi jako argumentami
    Vector2D add(const Vector2D&) const; // funkcja dodajaca do seibie dwa argumenty i zwracajaca wektor-sume
    double dot(const Vector2D&) const ; //funckja liczaca iloczyn skalarny dwoch wektorow
    void print(string) const; //funckja wypisuajca wektor wraz z podanym stringiem
    static int count; //zmienna liczaca ile zostalo zadeklarowanych obiektow typu Vector2D lub liczaca ktorym z kolei obiektem Vector2D jest dany obiekt
    
};


