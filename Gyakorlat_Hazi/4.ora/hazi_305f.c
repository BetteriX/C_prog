#include <stdio.h>

void kiir(int n, int tomb[]){
    for(int i = 0; i < n - 1; i++){
        printf("%d, ",tomb[i]);
    }

    printf("%d\n", tomb[n - 1]);
}

int main(){
    int tomb[5] = {4,7,34,23,67};
    int meret = 5;

    kiir(meret, tomb);

    return 0;
}