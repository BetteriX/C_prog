#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int get_double(int s){
    return s*s;
}

double gomb_felszin(int r){
    return 4*(r*2*PI);
}

double gomb_terfogta(int r){
    return 4*(r*3*PI*3);
}


int main(){
    int s = 0;
    printf("Add meg a gomb sugarat: ");
    scanf("%d", &s);

    int r = get_double(s);

    printf("A gomb felszine: %lf\n", gomb_felszin(r));
    printf("A gomb terfogata: %lf\n", gomb_terfogta(r));

    return 0;
}