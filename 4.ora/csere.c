#include <stdio.h>

void kiir(int n, int tomb[]){
    for(int i = 0; i < n; i++){
        printf("%d ", tomb[i]);
    }
    printf("\n");
}

int palindrom(int n, int tomb[]){
    int i = 0;
    int j = n - 1;
    while(i < j){
        if(tomb[i] == tomb[j]){
            i++;
            j++;
        }
        else{
            return 0;
        }
            return 1;
    }
}

void megfordit(int n, int tomb[]){
    int i = 0;
    int j = n - 1;
    while(i < j){
        int tmp = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = tmp;
        i++;
        j--;
    }
}

int main(){
    int tomb[10] = {1,2,3,4,5,6,7,8,9,10};
    int meret = 10;

    /*
    int a = 6;
    int b = 9;
    printf("előtte a=%d b=%d\n", a, b);
    int tmp = a;
    a = b;
    b = tmp;
    printf("utána a=%d b=%d\n",a, b);
    */

    /*
    printf("előtte:\n");
    kiir(meret, tomb);
    printf("utána:\n");
    megfordit(meret, tomb);
    kiir(meret, tomb);
    */

    if(palindrom(meret, tomb)==1){
        printf("A tömb palindrom\n");
    }
    else{
        printf("A tömb nem palindrom\n");
    }

    return 0;
}