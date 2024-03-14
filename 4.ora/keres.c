#include <stdio.h>

int tartalmaz(int n, int tomb[], int szam){
    for(int i = 0; i < n; i++){
        if(tomb[i] == szam){
            return 1;
        }
    }

    return 0;
}

int max(int n, int tomb[]){
    int max = tomb[0];
    for(int i = 0; i < n; i++){
        if(tomb[i] > max){
            max = tomb[i];
        }
    }
    
    return max;
}
int min(int n, int tomb[]){
    int min = tomb[0];
    for(int i = 0; i < n; i++){
        if(tomb[i] < min){
            min = tomb[i];
        }
    }
    
    return min;
}

int main(){
    int tomb[10] = {1,2,3,4,5,6,7,8,9,10};
    int meret = 10;

    /*
    printf("min: %d\n", min(meret, tomb));
    printf("max: %d\n", max(meret, tomb));
    */
   
    if(tartalmaz(meret, tomb, 4) == 0){
        printf("Az elemet nem tartalmaza az elemet.\n");
    }
    else{
        printf("Az elemet tartalmaza.\n");
    }

    return 0;
}