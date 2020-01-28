#include <iostream>
#include <cstdlib>
#include <cmath>


typedef double (*DataPtr);
typedef void (*functionPtr)(DataPtr);

DataPtr initializeData(const int size);
/**
 * allocates memory for array
 *
 * @param size - size of array
 * @return tab - pointer to array
 */

void printSeries(DataPtr start , DataPtr end);
/**
 * print array from start to end
 *
 * @param start - pointer to first element
 * @param end - pointer to last element
 */
void tripple(DataPtr w);
/**
 * tripple value from pointer w
 *
 * @param w - pointer to element from array
 */
void squareroot (DataPtr w);
/**
 * squareroot of value from w
 *
 * @param w - pointer to element from array
 */
void executeFunction(functionPtr wsk_fun, DataPtr start, DataPtr end);
/**
 * execute function from pointer with parameters from start to end
 *
 * @param wks_fun - pointer to function
 * @param start - pointer to first element of array
 * @param end - pointer to last element of array
 * */
void clearData(DataPtr start);
/**
 * delete memory of array
 *
 * @param start - pointer to first element of array that we're going to to delete
 */
void add_one(DataPtr w);
/**
 * add one to value from w
 *
 * @param w - pointer from array
 */
