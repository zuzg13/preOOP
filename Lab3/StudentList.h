#include <iostream>
#include <cstdlib>
#include <cstring>

void prepareList(char*** name, int** year, int cap);
/**<\fn Memory allocation for lists of students  (2)
 *
 * @param name - pointer to array of students' names, I allocate memory for this array
 * @param year - pointer to array of studetns' years of studying
 * @param cap - contains capacity of array of students
 */
void addStudent(int* number, int * cap, char*** names , int ** years , const char * fname, const char *sname, int y);
/**< \fn Add students to array
 *
 * @param number - pointer to variable containing number of students that are already added do array
 * @param cap - pointer to variable containing capacity in students array
 * @param names - pointer to array of students' names
 * @param years - pointer to array of studetns' years
 * @param fname - added student's first name
 * @param sname - added student's second name
 * @param y - added student's year of studying
 */
void printListContent (int cap, char **names);
/** print students' names from list
 * @param cap - size of list
 * @param names - list of names
 */

void printAllListContent (int cap, char ** names, int * years);
/** print students' names and years of studying from list
 * @param cap  - size of list
 * @param names  - list of names
 * @param years - list of years
 */
void clearStudents (int * cap , int * number , char *** names , int ** years);
/** clear student from list
 * @param cap - size of list
 * @param number - number of students to clear
 * @param names - list of students
 * @param years - list of years of studying
 */
