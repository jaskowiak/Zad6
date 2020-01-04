#include <stdio.h>
#include <ctype.h>
int wynikrek;
int silniarek (int n) {
    if(n==0)
        return 1;
    else return n*silniarek(n-1);
}

