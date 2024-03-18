#include <stdio.h>

int valid_triangle(int a, int b, int c){
    if(a < 0 || b < 0 || c < 0){
        printf("Ezzek az értéket nem valós értékek!");
        return 1;
    }

    if((a + b) > c && (a + c) > b && (b + c) > a){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int a,b,c;

    printf("a: ");
    scanf("%d", &a);

    printf("b: ");
    scanf("%d", &b);

    printf("c: ");
    scanf("%d", &c);

    if(valid_triangle(a,b,c) == 0){
        printf("A háromszög megszerkezthető!\n");
    }
    else{
        printf("A háromszög nem szerkeszthető meg!\n");
    }

    return 0;
}