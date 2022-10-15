#include <stdio.h>


/*
* Inverse the bit value, 0 becomes 1 and vice versa
* I don't actually know how to do otherwise
*/
unsigned char notBinairy(unsigned char bit){
    unsigned char i = 1;
    if (bit == 1) i = 0;
    return i;
}

unsigned char orBinairy(unsigned char bit1, unsigned char bit2){
    return bit1 | bit2;
}