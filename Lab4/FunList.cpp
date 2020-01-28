#include "Functions.h"


DataPtr initializeData(const int size )
{
    DataPtr tab = new double[size];
    for(int i=0;i<size;i++)
        tab[i]=i;
    return tab;
}
void printSeries(DataPtr start , DataPtr end)
{
    DataPtr w = start;
    std :: cout << (*w);
    w++;
    do{
        std :: cout << ", " << (*w);
        w++;
    }while(w!=end);
    std :: cout << std :: endl;
}
void tripple(DataPtr w)
{
    (*w)=(*w)*3;
}
void add_one(DataPtr w)
{
    (*w)+=1;
}

void squareroot (DataPtr w)
{
    (*w)=sqrt((*w));
}

void executeFunction(functionPtr wsk_fun, DataPtr start, DataPtr end)
{
    DataPtr w = start;
    do{
        (*wsk_fun)(w);
        w++;
    }while(w!=end);
}

void clearData(DataPtr start)
{
    delete [] start;
    start = NULL;   
}


