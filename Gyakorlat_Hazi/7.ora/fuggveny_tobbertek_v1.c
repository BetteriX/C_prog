// https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200331a
// 20200331a

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tomb_feltolt(int tomb[], int meret){
    srand(time(NULL));

    for(int i = 0; i < meret; i++){
        tomb[i] = rand() % 90 + 10;
    }
}

void stats(int tomb[], double meret, int* min, int* max, double* avg){
    *min = tomb[0];
    *max = tomb[0];
    int sum = 0;

    for(int i = 0; i < meret; i++){
        if(tomb[i] < *min){
            *min = tomb[i];
        }else if(tomb[i] > *max){
            *max = tomb[i];
        }

        sum += tomb[i];
    }

    *avg = (double)sum / meret;
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

    stats(tomb, 10, &min, &max, &avg);

    printf("Legkisebb szám: %d\n", min);
    printf("Legnagyobb szám: %d\n", max);
    printf("Az elemek átlaga: %.1f\n", avg);

    return 0;
}