#include "calculations.h"

int factorial(int f){
    if(f == 0){
        return 1;
    }
    else{
        return f * factorial(f-1);
    }
}

void printFactorial(int n){
    printf("%d! = %d\n", n, factorial(n));
}

//gcc -Wall -std=c99 -pedantic -Werror calculations.c modularProg.c -o finalProg