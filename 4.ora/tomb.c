#include <stdio.h>

void kiir(int n, int tomb[]){
    for(int i = 0; i < n; i++){
        printf("%d\n", tomb[i]);
    }

}

int osszeg(int n, int tomb[]){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += tomb[i];
    }
    
    return sum;
}

int szorzas(int n, int tomb[]){
    int sum = 1;
    for(int i = 0; i < n; i++){
        sum *= tomb[i];
    }
    
    return sum;
}

float atlagol(int n, int tomb[]){
    float atlag = 0;
    float sum = 0;
    for(int i = 0; i < n; i++){
        sum += tomb[i];
    }

    return sum / n;
}

int main(){
    int tomb[10] = {1,2,3,4,5,6,7,8,9,10};
    int meret = 10;

    /*
    int sum = osszeg(meret, tomb);
    int szorzat = szorzas(meret, tomb);
    float atlag = atlagol(meret, tomb);
    printf("sum: %d\n", sum);
    printf("szorzat: %d\n", szorzat); // ?
    printf("atlag: %lf\n", atlag);


    kiir(meret, tomb);
    */
    return 0;
}