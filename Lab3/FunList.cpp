#include "StudentList.h"


void prepareList(char *** name, int ** year, int cap)
{
    (*name)=(char**)malloc(cap*sizeof(char*));
    (*year)=(int*)malloc(cap*sizeof(int));
    return ;

}

void addStudent(int* number, int * cap, char*** names , int ** years, const char *fname, const char *sname, int y)
{
    int size=0, i;
    size=strlen(fname)+strlen(sname)+2;

    if(*number==*cap)
    {
        char ** names2=NULL;
        int * years2=NULL;
        (*cap)++;
        names2=(char**)realloc(*names, (*cap)*sizeof(char*));
        years2=(int*)realloc(*years, (*cap)*sizeof(int));
        *names=names2;
        *years=years2;
    }

    int j=(*number);
    (*number)++;
    (*names)[j]= (char*)malloc(size*sizeof(char));
    for(i=0; i<(strlen(fname));i++)
    {
        (*names)[j][i]=fname[i];
    }
    (*names)[j][i]=' ';
    i++;
    for(; i<size-1;i++)
    {
        (*names)[j][i]=sname[i-(strlen(fname)+1)];
    }
    i=size-1;
    (*names)[j][i]='\0';

    (*years)[j]=y;

    return;

}

void printListContent (int cap, char **names)
{
    for(int i=0;i<cap;i++)
    {
        std :: cout << *(names+i) << std :: endl;
    }
    return;
}



void printAllListContent (int cap, char ** names, int * years)
{
    for(int i=0;i<cap;i++)
    {
        std :: cout << *(names+i) << "-" ;
        std :: cout << *(years+i) << std :: endl;
    }
    return;
}

void clearStudents (int * cap , int * number , char *** names , int ** years)
{
    free(*years);
    for(int i=0; i < (*number); i++)
    {
        free((*names)[i]);
    }
    free(*names);
    *cap=0;
    *number=0;
    return;
}
