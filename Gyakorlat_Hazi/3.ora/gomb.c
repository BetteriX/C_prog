#include <stdio.h>
#define PI 3.14159265358979323846
#include <math.h>

int get_double(){
    double s = 0;
    printf("Add meg egy valos erteket: ");
    scanf("%lf", &s);

    return s;
}

double gomb_felszin(double r){
    return 4* pow(r,2.0) *PI;
}

double gomb_terfogta(int r){
    return (4* pow(r,3.0) *PI)/3;
}


int main(){
    double r = get_double();

    printf("A gomb felszine: %lf\n", gomb_felszin(r));
    printf("A gomb terfogata: %lf\n", gomb_terfogta(r));

    return 0;
}