#include <stdio.h>
#include <stdlib.h>
#include "rek.h"
#include "silnia.h"
#include "wynik.h"
int wynikrek;
int wynik;
int n;

int main() {
    printf("Podaj liczbe z ktorej obliczyc silnie: ");
    scanf("%d",&n);
    printf("\n");
    suma=silniax(n);
    printf("Silnia to: %d",suma/10);
    suma2=silniarek(n);
    printf("\nSilnia liczona rekurencyjnie: %d",suma2);
}
