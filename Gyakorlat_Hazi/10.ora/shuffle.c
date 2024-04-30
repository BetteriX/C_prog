#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int n, int tomb[]){
    for(int i = n-1; i > 1; i--){
        int j = rand() % ((i - 1)+1);

        int tmp = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = tmp;
    }
}

int main(){
    srand(time(NULL));

    int tomb[5] = {1, 2 ,3 ,4 ,5};
    printf("Előtte:\n");
    for(int i = 0; i < 5; i++){
        printf("%d ", tomb[i]);
    }

    puts("");

    shuffle(5, tomb);
    printf("Utána:\n");
    for(int i = 0; i < 5; i++){
        printf("%d ", tomb[i]);
    }

    puts("");

    return 0;
}