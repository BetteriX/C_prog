#include <stdio.h>

int is_even(int n){
    if(n % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

/*
int is_odd(int n){
    if(n % 2 != 0){
        return 1;
    }
    else{
        return 0;
    }
}
*/

int is_odd(int n){
    if(is_even(n) == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    scanf("%d", &n);

    printf("%d\n", is_odd(n));

    return 0;
}