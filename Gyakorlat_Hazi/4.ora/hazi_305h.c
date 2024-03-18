#include <stdio.h>

void absolute(int n, int tomb[]){
    for(int i = 0; i < n - 1; i++){
        if(tomb[i] < 0){
            tomb[i] *= -1;
        }
    }
}

int main(){
    int tomb[5] = {4, -67, 43, -86, 43};
    int meret = 5;

    printf("Előtte:\n");

    for(int i = 0; i < meret - 1; i++){
        printf("%d ", tomb[i]);
    }
    printf("\n");

    printf("Utána:\n");
    absolute(meret, tomb);

    for(int i = 0; i < meret - 1; i++){
        printf("%d ", tomb[i]);
    }
    printf("\n");

    return 0;
}