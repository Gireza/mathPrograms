#include <stdio.h>
#include "tp1.h"


int main(int argc, char** argv){

    printf("not 0 : %d \n", notBinaire(0));
    printf("not 1 : %d \n", notBinaire(1));

    printf("0 or 0 : %d \n", orBinaire(0, 0));
    printf("1 or 0 : %d \n", orBinaire(1, 0));
    printf("1 or 1  : %d \n", orBinaire(1, 1));

    
    return 0;
}