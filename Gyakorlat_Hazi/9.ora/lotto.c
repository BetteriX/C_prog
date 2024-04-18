// https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200326d
// 20200326d (B+C verzió)

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

int contains(int tomb[], int meret, int szam){
    for(int i = 0; i < meret; i++){
        if(tomb[i] == szam){
            return 1;
        }
    }

    return 0;
}

void Sort(int tomb[], int meret){
    for(int i = 0; i < meret; i++){
        for(int j = 0; j < meret-i-1; j++){
            if(tomb[j] > tomb[j+1]){
                int tmp = tomb[j];
                tomb[j] = tomb[j+1];
                tomb[j+1] = tmp;
            }
        }
    }
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

    int tomb[rand_db];
    int meret = 0;
    for(int i = 0; i < rand_db; i++){
        int veletlen_szam = randint(also_h, felso_h);
        if(contains(tomb, meret, veletlen_szam)==1){
            //printf(" Újra: %d ", veletlen_szam);
            i--;
        }
        else{
            tomb[i] = veletlen_szam;
            meret++;
            //printf(" %d", veletlen_szam);
        }
    }

    Sort(tomb, rand_db);

    for(int i = 0; i < rand_db; i++){
        printf(" %d", tomb[i]);
    }

    printf("\n");


    return 0;
}