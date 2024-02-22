#include <stdio.h>

int main(){
    printf("Adja meg a téglalap hosszát: ");
    int a;
    scanf("%d",&a);
    
    printf("Adja meg a téglalap szélességét: ");
    int b;
    scanf("%d",&b);

    printf("A téglalap kerülete: %d", 2*(a+b));
    printf("A téglalap területe: %d", a*b);
}