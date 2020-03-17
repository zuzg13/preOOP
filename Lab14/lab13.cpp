/*
 Celem zadania jest napisanie kilku klas związanych relacja
 dziedziczenia.  Klasy te opisują elementarne kształty. Każdy kształt
 ma jakieś polimorficzne metody i konieczną infrastrukturę.
 
 UWAGA: Przed rozpoczeciem pisania prosze przeczytac zadanie do konca.
 UWAGA: Wzor na pole trojkata: sqrt( x(x-a)(x-b)(x-c) ) 
 gdzie "x" to polowa obwodu trojkata.
 
 */

#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

int main() {
  Rectangle r(4,2);
  Triangle t(3,2,4);
  const Circle c(3);

  print(r); // Prostokat o bokach: 4 2
  print(t); // Trojkat o bokach: 3 2 4
  print(c);// Kolo o promieniu: 3

  Shape* b = new Rectangle(7,2);
  print(*b);
  delete b;
  
  b = new Circle(7);
  print(*b);
  delete b;
  
  const Shape* all[] = {&r, &r, &c, &t, &c}; // obiekty powtorzone celowo
  for ( unsigned idx = 0; idx < sizeof(all)/sizeof(Shape*); ++idx ) {
    const Shape* k = all[idx];
    k->print();
    std::cout << k->area() << std::endl;
  }  
}
/* wynik
Prostokat o bokach: 4 2
Trojkat o bokach: 3 2 4
Kolo o promieniu: 3
Prostokat o bokach: 7 2
Kolo o promieniu: 7
Prostokat o bokach: 4 2
8
Prostokat o bokach: 4 2
8
Kolo o promieniu: 3
28.2743
Trojkat o bokach: 3 2 4
2.90474
Kolo o promieniu: 3
28.2743

 */
