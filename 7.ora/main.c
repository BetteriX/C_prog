#include <stdio.h>
#include <math.h>
#define SIZE 100
#define pi 3.14159265358979323

/*
void get_values(int *p1, int *p2){
    int *p1 = 2;
    int *p2 = 10;
}
*/
typedef struct {
    int x;
    int y;
} Pont;

typedef struct{
    int a;
    int b;
} Teglalap;

typedef struct{
    double r;
} Kor;

/*
int Teglalap_kerulet (Teglalap t){
    return 2*(t.a + t.b);
}

int Teglalap_terulet (Teglalap t){
    return t.a*t.b;
}
*/

void muvelet(Teglalap t, int *kerulete, int *terulete){
    *kerulete = 2*(t.a + t.b);
    *terulete = t.a*t.b;
}

void Kor_muvelet(Kor k, double *kerulete, double *terulete){
    *kerulete = 2*pi*k.r;
    *terulete = pi*pow(k.r,2);
}

int main(int argc, char const *argv[]){
    /*
    Teglalap t = {5, 10};

    int kerulete;
    int terulete;

    muvelet(t,&a,&b);

    printf("kerulete:%d terulete:%d\n", a, b);
    */
    Kor k = {5};

    double kerulete;
    double terulete;
    Kor_muvelet(k,&kerulete,&terulete);

    printf("kerulete:%.1f terulete:%.1f\n", kerulete, terulete);

    /*
    int *p1 = 2;
    int *p2 = 10;

    get_values(&p1, &p2);
    printf("%d, %d",p1, p2);
    */

    /*
    struct pont p1 = {5, 10};
    //p1.x= 5;
    //p1.y = 10;

    printf("%d %d", p1.x, p1.y);
    */
    return 0;
}