#include "check_number.h"

bool number_correct(const char * card)
{
    /**
     * Check if control number of card is correct or not
     *
     * @param card Card number whose control number we want to check
     * @return true if number is correct or false if it's not
     */
    char ctrl = find_ctrl(card);
    if(ctrl == '0')
        return true;
    else
        return false;
}
