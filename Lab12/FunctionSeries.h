#include <iostream>
#include <vector>
#include "Functions.h"


class FunctionSeries
{   
    public:
    FunctionSeries()=default;
    ~FunctionSeries()
    {
        table.clear();
        wyniki.clear();
    } 
    void insert(std::function<double(double)> x);
    
    double operator [](double);
    double calc(double);
    
    
    private:
    std::vector<std::function<double(double)>>table;
    std::vector<double> wyniki;




};
