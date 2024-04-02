// https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200326a
// 20200326a

#include <stdio.h>
#include <stdlib.h>

int main(){
    int db = 0;
    printf("Hány db számot szeretnél bevinni?\n");
    scanf("%d", &db);

    int tomb[db];
    for(int i = 0; i < db; i++){
        printf("%d. szám: ", i+1);
        scanf("%d", &tomb[i]);
    }

    printf("\n");

    int abs_tomb[db];
    for(int i = 0; i < db; i++){
        abs_tomb[i] = abs(tomb[i]);
    }

    printf("A bevitt számok abszolútértékei:");

    for(int i = 0; i < db; i++){
        printf(" %d", abs_tomb[i]);

        if(i != db-1){
            printf(",");
        }
        else if(i == db-1){
            printf("\n");
        }
    }

    printf("A megadott számok:");
    for(int i = 0; i < db; i++){
        printf(" %d", tomb[i]);

        if(i != db-1){
            printf(",");
        }
        else if(i == db-1){
            printf("\n");
        }
    }

    return 0;
}