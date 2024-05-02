// https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200416f
// 20200416f

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choice(const int n, const int tomb[]){ 
    int felso = n;
    int also = 0;
    int random = also +(rand() % (felso - also + 1)); // Az n lesz a felső határ és az alsó pedig 0 mert nincs megadva.
    printf("Debug: %d\n\n", random);
    return tomb[random];
}

int main(){
    srand(time(NULL));

    int tomb[5] = {57, 5654, 542, 876, 132};

    int random_szam = choice(sizeof(tomb)/sizeof(int), tomb);

    printf("A random szám tömböl: %d\n", random_szam);

    return 0;
}