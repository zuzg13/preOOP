#include <iostream>
#include "BooksShelf.h"
#include "Book.h"

int main() {
  Book b1("Long title");
  Book b2("Much Longer Title");
  Book b3("Title");

  BooksShelf shelf(3);
  shelf.add(b1);
  shelf.add(b2);
  shelf.add(b3);

  shelf.print();

  const BooksShelf backup = shelf;
  shelf.remove(1);

  std::cout << "================== Original shelf: ==================" << std::endl;
  shelf.print();
  std::cout << "====================== Backup: ======================" << std::endl;
  backup.print();
}
/* wyniki

          Dlugi Tytul
Znacznie Znacznie Dluzszy Tytul
             Tytul
================== Original shelf: ==================
Dlugi Tytul
   Tytul
====================== Backup: ======================
          Dlugi Tytul
Znacznie Znacznie Dluzszy Tytul
             Tytul

*/
