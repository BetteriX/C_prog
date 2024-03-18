#include <stdio.h>

int contain(int search, int n, int tomb[]){
    for(int i = 0; i < n - 1; i++){
        if(tomb[i] = search){
            return 1;
        }
    }

    return 0;
}

int main(){
    int tomb[10] = {1,2,3,4,5,6,7,8,9,10};
    int meret = 10;

    if(contain(10, meret, tomb) == 1){
        printf("A tömbe szerepel az érték!\n");
    }
    else{
        printf("A tömbe nem szerepel az érték!\n");
    }
}