#include <iostream>

typedef struct bity {
    /**
     * structure containing binary number and its length
     */
    int tab[32];
    int length;
}Bits;

void set(Bits* bity, int * data, int size);
/**
 * set data in structure, from input array
 *
 * @param bity - structure Bits
 * @param data - array with binary number
 * @param size - size of array and length of number
 */

void print(const Bits* bity);
/**
 * prints structure
 *
 * @param bity structure that we want to print
 *
 */
Bits add_up(Bits* bit1, Bits* bit2);
/**
 * sum two numbers
 * @param bit1 - first number
 * @param bit2 - second number
 * @return bit3  - summed number
 */

int to_decimal(const Bits * bity);
/**
 * convert number from binary system to decimal
 *
 * @param bity - number in binary system
 * @return number in decimal system
 */

void bit_and(Bits* bity, Bits* mask);
/**
 * bit and of binary number and mask
 *
 * @param bity - binary number
 * @param mask - mask
 */
void bit_xor(Bits* bity, Bits* mask);
/**
 * bit xor of binary number and mask
 *
 * @param bity - binary number
 * @param mask - mask
 */
