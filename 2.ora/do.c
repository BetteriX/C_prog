#include <stdio.h>

int main(){
    int szam;

    do{
        printf("Pozitív egész: ");
        scanf("%d", &szam);
    } while(szam <= 0);

    printf("A szám: %d\n", szam);

    return 0; 
}