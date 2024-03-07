#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int negyzet_kerulet(int a){
    return 4*a;
}

int negyzet_terulete(int a){
    return a*a;
}

int teglalap_kerulet(int a, int b){
    return 2*(a+b);
}

int teglalap_terulet(int a, int b){
    return a*b;
}

int kor_kerulete(){

}

int kor_terulete(){

}


int main(){
    printf("negyzet kerulete, terulete: %d, %d\n", negyzet_kerulet(5), negyzet_terulete(5));

    printf("teglalap kerulete, terulete: %d, %d\n", teglalap_kerulet(10,5), teglalap_terulet(10,5));

    return 0;       
}