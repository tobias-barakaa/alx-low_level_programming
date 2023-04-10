#include "main.h"





int get_bit(unsigned long int n, unsigned int index) {
    if (index >= sizeof(unsigned long int) * 8) { // Check if index is valid
        return -1;
    }
    unsigned long int mask = 1UL << index; // Create a mask with a 1 at the given index
    return (n & mask) != 0; // Use bitwise AND to check if the bit is 1 or 0 and return the value
}
