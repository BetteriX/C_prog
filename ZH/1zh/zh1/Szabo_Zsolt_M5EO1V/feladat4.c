#include <stdio.h>
#include <string.h>

int main(){
    char binaris[100];
    int max_decimal = 0;
    do  
    {
        printf("Bináris szám (vége *): ");
        fgets(binaris, 100, stdin);

        int hossz = strlen(binaris);
        
        int kettes = 1;
        int decimal = 0;

        for(int i = hossz-2; i >= 0; i--){
            if(binaris[i] == '1'){
                decimal += kettes;
            }
            kettes *= 2;
        }

        if(max_decimal < decimal){
            max_decimal = decimal;
        }

        printf("Decimális szám: %d\n", decimal);
    } while (binaris[0] != '*');

    printf("\n");

    printf("Maximális szám: %d\n", max_decimal);

    return 0;
}