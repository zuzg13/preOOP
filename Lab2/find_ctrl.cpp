#include <iostream>
#include <cstring>
#include "check_number.h"

char find_ctrl(const char * card)
{
    /**
            Calculate control number
             @param card Card number whose control number we want to calculate
             @return control number, contained in ctrl
     */
    int length = strlen(card);
    int suma = 0;
    int c=0, pom=0;

    for(int i=length-1; i>=0 ;i--)
    {
        if(pom==1)
            pom=2;
        else
            pom=1;
        c=*(card+i) -'0';
        c=c*pom;
        if(c>9)
        {
            suma += c%10 + (c-(c%10))/10;
        }
        else
        {
            suma += c;
        }

    }


    if(suma>100) // zamiana sumy cyfr na odpowiednia liczbe kontrolna w zaleznosci od rzedu wielkosci
        suma=suma%100;
    else if(suma>10)
        suma=suma%10;
    char ctrl = suma + '0';
    return ctrl;
}
