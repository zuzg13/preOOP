#include "Bits.h"

void set(Bits* bity, int * data, int size)
{
    int *p=data;
    for(int i=0; i<size; i++)
    {
        bity->tab[i]=(*p);
        p++;
    }
    bity->length=size;
    if(size<32)
    {
        for(int i=size;i<32;i++)
        {
            bity->tab[i]=0;
        }    
    }
}
void print(const Bits* bity)
{
    int flag=1;
    for(int i=0;i<(bity->length);i++)
    {
        if(flag==1 and bity->tab[i]==0)
            continue;
        else if(bity->tab[i]==1)
            flag=0;

        std :: cout << bity->tab[i];
    }
    std :: cout << std :: endl;
}
Bits add_up(Bits*bit1, Bits* bit2)
{
    int a[32], b[32], c[32];
    int i;
    int pom=0;
    for(i=0;i<32;i++)
        c[i]=0;
    for(i=bit1->length - 1 ; i>=0;i--)
    {
        a[bit1->length-i-1]=bit1->tab[i];
    }
    for(i=bit1->length;i<32;i++)
        a[i]=0;

    for(i=bit2->length - 1 ; i>=0;i--)
    {
        b[bit2->length-i-1]=bit2->tab[i];
    }
    for(i=bit2->length;i<32;i++)
        b[i]=0;

    int size = bit1->length >= bit2->length ? bit1->length : bit2->length;

    for(i=0;i<size;i++)
    {
        pom=pom+a[i]+b[i];
        if(pom<2)
        {
            c[i]=pom;
            pom=0;
        }
        else if(pom==2)
        {
            c[i]=0;
            pom=1;
        }
        else
        {
            c[i]=1;
            pom=1;
        }
    }

    if(pom!=0 and i==32)
    {
        std :: cout << "wyjscie poza zakres 32 bitow" << std :: endl;
    }
    if(pom!=0 and i<32)
    {
        while(pom!=0 xor i>=32)
        {
            pom=pom+a[i]+b[i];
            if(pom<2)
            {
                c[i]=pom;
                pom=0;
            }
            else if(pom==2)
            {
                c[i]=0;
                pom=1;
            }
            else
            {
                c[i]=1;
                pom=1;
            }
            i++;
        }
    }

    Bits suma;
    suma.length=i-1;
    for(i=suma.length-1;i>=0;i--)
    {
        suma.tab[suma.length-i-1]=c[i];
    }
    for(i=31;i>=suma.length;i--)
    {
        suma.tab[i]=0;
    }


    return suma;

}

int to_decimal(const Bits* bity)
{
    int suma=0;
    int pot=1;
    for(int i=(bity->length)-1; i>=0;i--)
    {
        suma=suma+(bity->tab[i])*pot;
        pot=pot*2;
    }
    return suma;
}
void bit_and(Bits* bity, Bits* mask)
{
    for(int i=0; i<(bity->length);i++)
    {
        bity->tab[i]=bity->tab[i] & mask->tab[i];
    }
}
void bit_xor(Bits* bity, Bits* mask)
{
    for(int i=0; i<(bity->length);i++)
    {
        bity->tab[i]=bity->tab[i] ^ mask->tab[i];
    }
}







