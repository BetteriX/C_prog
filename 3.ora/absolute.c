#include <stdio.h>

int my_abs(int input){
    if(input < 0){
        return input * (-1);
    }
    else return input;
}

int main(){
    int n = -5;

    printf("%d\n", my_abs(n));

    return 0;
}