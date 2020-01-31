#include <iostream>
#include <cstdlib>
#include <cmath>


typedef double (*DataPtr);
typedef void (*functionPtr)(DataPtr);

/**
 * allocates memory for array
 *
 * @param size - size of array
 * @return tab - pointer to array
 */
DataPtr initializeData(const int size);

/**
 * print array from start to end
 *
 * @param start - pointer to first element
 * @param end - pointer to last element
 */
void printSeries(DataPtr start , DataPtr end);

/**
 * tripple value from pointer w
 *
 * @param w - pointer to element from array
 */
void tripple(DataPtr w);

/**
 * squareroot of value from w
 *
 * @param w - pointer to element from array
 */
void squareroot (DataPtr w);

/**
 * execute function from pointer with parameters from start to end
 *
 * @param wks_fun - pointer to function
 * @param start - pointer to first element of array
 * @param end - pointer to last element of array
 * */
void executeFunction(functionPtr wsk_fun, DataPtr start, DataPtr end);

/**
 * delete memory of array
 *
 * @param start - pointer to first element of array that we're going to to delete
 */
void clearData(DataPtr start);

/**
 * add one to value from w
 *
 * @param w - pointer from array
 */
void add_one(DataPtr w);

