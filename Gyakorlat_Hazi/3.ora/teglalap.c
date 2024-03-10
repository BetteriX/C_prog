#include <stdio.h>

int teglalap_kerulet(int a, int b){
    return 2*(a+b);
}

int teglalap_terulet(int a, int b){
    return a*b;
}

int main(){
    int a = 0;
    int b = 0;

    printf("Teglalap a: ");
    scanf("%d", &a);

    printf("Teglalap b: ");
    scanf("%d", &b);

    printf("Teglalap kerulete: %d\n", teglalap_kerulet(a,b));
    printf("Teglalap terulete: %d\n", teglalap_terulet(a,b));

    return 0;
} 