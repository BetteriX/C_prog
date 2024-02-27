#include <stdio.h>

int main(){
    printf("Adj meg egy számot: ");
    int a;
    scanf("%d", &a);

    if(a % 2 == 0){
        printf("A szám páros\n");
    }
    else{
        printf("A szám páratlan\n");
    }

    return 0;
}