// https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200326d
// 20200326d (A verzió)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint(int also, int felso){ // also = 1, felso = 90
    int veletlen = rand(); // egy random szám pl.: 9001
    int intervallum = felso - also + 1; // 90 -1 + 1 = 90

    veletlen = veletlen % intervallum; // 9001 % 90 = 1
    veletlen += also; // 1 + 1 = 2

    return veletlen; // 2
}

int main(){
    printf("Hány db random számot kérsz?\n");
    int rand_db = 0;
    scanf("%d", &rand_db);

    printf("Alsó határ: ");
    int also_h = 0;
    scanf("%d", &also_h);

    printf("Felső határ (zárt intervallum): ");
    int felso_h = 0;
    scanf("%d", &felso_h);

    printf("\n");

    printf("A generált számok:");
    srand(time(NULL));

    for(int i = 0; i < rand_db; i++){
        printf(" %d",randint(also_h,felso_h));
    }

    printf("\n");


    return 0;
}