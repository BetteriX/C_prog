#include <stdio.h>

int main(){
    printf("Adja meg a téglalap hosszát: ");
    int a;
    scanf("%d",&a);
    
    printf("Adja meg a téglalap szélességét: ");
    int b;
    scanf("%d",&b);

    printf("A téglalap kerülete: %d\n", 2*(a+b));
    printf("A téglalap területe: %d\n", a*b);

    return 0;
}