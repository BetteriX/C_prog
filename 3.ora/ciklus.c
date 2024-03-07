#include <stdio.h>

int main(){
    /*
    int n = 0;

    while(1){
        printf("Írj be egy pozitiv számot: ");
        scanf("%d", &n);

        if (n > 0)
        {
            break;
        }
    }
    */

    int n = 0;
    int pozitiv = 0;
    int negativ = 0;
    while(1){
        printf("Írj be egy számot(0 Kilépés): ");
        scanf("%d", &n);

        if(n > 0){
            pozitiv++;
        }
        else if(n < 0){
            negativ++;
        }
        else{
            break;
        }
    }
    
    printf("Pozitiv: %d\nNegativ: %d\n", pozitiv, negativ);

    return 0;
}