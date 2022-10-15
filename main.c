#include <stdio.h>
#include "tp1.h"


int main(int argc, char** argv){

    //printf("0 avec le NOT, devient : %d \n", notBinaire(0));
    //printf("1 avec le NOT, devient : %d \n", notBinaire(1));

    printf("0 ou 0 : %d \n", orBinaire(0, 0));
    printf("1 ou 0 : %d \n", orBinaire(1, 0));
    printf("1 ou 1  : %d \n", orBinaire(1, 1));

    
    return 0;
}