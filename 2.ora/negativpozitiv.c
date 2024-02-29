#include <stdio.h>

int main(){
    printf("Írj be egy számot: ");
    int a;
    scanf("%d", &a);

    if(a > 0){
        printf("A szám pozitív\n");
    }
    else if(a < 0){
        printf("A szám negatív\n");
    }
    else{
        printf("A szám 0\n");
    }

    return 0;
}