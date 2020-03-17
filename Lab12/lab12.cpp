// Overloading operator() and std::function


#include "Functions.h"
#include "FunctionSeries.h"
#include <iostream>

double rec(double x){
	return x>0 ? x : 0;
}

int main ()
{
  Sin sinus(M_PI, M_PI/3.);
  const Sqrt squareroot;
  Linear lin(-0.25, 1.0);

  double x = 10;

  std::cout << sinus(x) << std::endl; 
  std::cout << squareroot(x) << std::endl; 
  std::cout << lin(x) << std::endl; 
  
  FunctionSeries fs;
  fs.insert(sinus);
  fs.insert(squareroot);
  fs.insert(lin);
  fs.insert(rec);

  double result1 = fs.calc(x);
  double result2 = rec(lin(squareroot(sinus(x))));

  std::cout << "-- dla x=10:\t" << result1 << ", " << result2 << std::endl; 

  x=0.5;
  std::cout << "-- dla x=0.5:\t" << fs.calc(x) << std::endl;

  // operator[]
  std::cout << ": " << std::endl;
  double sinx = sinus(x);
  std::cout << sinx << ", " << fs[0] << std::endl; 
  std::cout << squareroot(sinx) << ", " << fs[1] << std::endl; 
  std::cout << lin(squareroot(sinx)) << ", " << fs[2] << std::endl; 
}
/* outuput

0.866025
3.16228
-1.5
-- dla x=10:	0.767349, 0.767349
-- dla x=0.5:	0.823223
posrednie wyniki: 
0.5, 0.5
0.707107, 0.707107
0.823223, 0.823223

*/
