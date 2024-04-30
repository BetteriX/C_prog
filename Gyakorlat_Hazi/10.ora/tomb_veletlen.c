#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choice(const int n, const int tomb[]){
    int random = rand() % ((n - 1) + 1); // Az n lesz a felső határ és az alsó pedig 1 lesz mert feltételezük hogy 1 lehet benne.
    printf("Debug: %d\n\n", random);
    return tomb[random];
}

int main(){
    srand(time(NULL));

    int tomb[5] = {57, 5654, 542, 876, 132};

    int random_szam = choice(5, tomb);

    printf("A random szám tömböl: %d\n", random_szam);

    return 0;
}