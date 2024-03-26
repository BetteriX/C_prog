#include <stdio.h>

void fizz_buzz(int i){
    if(i % 3 == 0 && i % 5 == 0){
        printf("fizzbuzz\n");
    }
    else if(i % 5 == 0){
        printf("buzz\n");
    }
    else if(i % 3 == 0){
        printf("fizz\n");
    }
    else{
        printf("%d\n", i);
    }
}

int main(){
    for(int i = 1; i <= 100; i++){
        fizz_buzz(i);
    }

    return 0;
}