#include <stdio.h>

int rendezett_e(int n, int tomb[]){
    if(n = 0){
        return 1;
    }
    for(int i = 0; i < n - 1 ; i++){
        // printf("%d > %d\n", tomb[i], tomb[i + 1]);
        if(tomb[i] > tomb[i+1]){
            return 1;
        }
    }

    return 0;
}

int main(){
    // int tomb[10] = {1,2,3,4,5,7,6,8,9,10};
    //int tomb[10] = {1,2,3,4,5,6,7,8,9,10};
    int tomb[0];
    int meret = 0;

    if(rendezett_e(meret, tomb) == 0){
        printf("A tömb rendezett!\n");
    }
    else{
        printf("A tömb nem rendezett!\n");
    }

    return 0;
}