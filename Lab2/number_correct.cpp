#include "check_number.h"

bool number_correct(const char * card)
{
    char ctrl = find_ctrl(card); //odwoluje sie do funkcji find_ctrl zeby sprawdzic wartosc cyfry kontrolnej
    if(ctrl == '0') // zwracanie odpowiednich wartosci
        return true;
    else
        return false;
}
