#include <stdio.h>
#include <stdlib.h>

#define MIN 100
#define MAX 2024
#define SIZE 500

int randint(int also, int felso){
    int veletlen = rand();
    int intervallum = felso - also + 1;

    veletlen = (veletlen % intervallum) + also;

    return veletlen;
}

void feltolt(int szamok[]){
    for(int i=0; i < SIZE; i++){
        szamok[i] = randint(MIN,MAX);
    }
}

int main(){
    srand(2024);

    int szamok[SIZE];

    feltolt(szamok);

    int count = 0;
    double szamok_sum = 0;
    for(int i = 0; i < SIZE; i++){
        if (szamok[i] % 3 == 0)
        {
            szamok_sum += szamok[i];
            count++;
        }
    }

    double szamok_atlag = szamok_sum/count;

    printf("%.1f\n",(double)szamok_atlag);

    return 0;
}