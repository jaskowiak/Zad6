#include <stdio.h>
#include <ctype.h>
int wynik;

int silniax(int n) {
    int i;
    int suma;
    for (i=1;i<=n;i++){
        suma=suma*i;
    }
    return suma;
}

