// https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200407a
// 20200407a

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    int min;
    int max;
    double avg;
} Elemek;

void tomb_feltolt(int tomb[], int meret){
    srand(time(NULL));

    for(int i = 0; i < meret; i++){
        tomb[i] = rand() % 90 + 10;
    }
}

Elemek stats(int tomb[], double meret){
    Elemek t = {
        .min = tomb[0],
        .max = tomb[0],
        .avg = 0
    };
    int sum = 0;

    for(int i = 0; i < meret; i++){
        if(tomb[i] < t.min){
            t.min = tomb[i];
        }else if(tomb[i] > t.max){
            t.max = tomb[i];
        }

        sum += tomb[i];
    }

    t.avg = (double)sum / meret;

    return t;
}

int main(){
    int min;
    int max;
    double avg;
    
    int tomb[10];

    tomb_feltolt(tomb, 10);

    printf("A tömb elemei:");
    for(int i = 0; i < 10; i++){
        printf(" %d", tomb[i]);

        if(i != 9){
            printf(",");
        }
    }   

    printf("\n");

    Elemek t = stats(tomb, 10.0);

    printf("Legkisebb szám: %d\n", t.min);
    printf("Legnagyobb szám: %d\n", t.max);
    printf("Az elemek átlaga: %.1f\n", t.avg);

    return 0;
}