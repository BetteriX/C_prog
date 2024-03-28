#include <stdio.h>
#define SIZE 26

void line(char c, int n){
    for(int i = 0; i < n; i++){
        putchar(c);
    }
    printf("\n");
}

void feltolt(int n, char tomb[]){
    for(int i = 0; i < n; i++){
        tomb[i] = 'a' + i;
    }
}


int main(){
    /*
    printf("hello");
    line('*', 20);
    printf("hello world");
    */

    char abece[SIZE];
    feltolt(SIZE, abece);
    for(int i = 0; i < SIZE; i++){
        printf("%c , ", abece[i]);
    }

    return 0;
}