#include <stdio.h>
#include <string.h>

int main(){
    char binaris[100];
    int max_decimal = 0;
    while(1)
    {
        printf("Bináris szám (vége *): ");
        fgets(binaris, 100, stdin);
        binaris[strlen(binaris)-1]='\0';

        if(strcmp(binaris,"*")==0){
            break;
        }
        else{
        int hossz = strlen(binaris);
            
        int kettes = 1;
        int decimal = 0;
        //index        0123 
        //binaris[3] = 1100
        for(int i = hossz-1; i >= 0; i--){
            if(binaris[i] == '1'){
                    decimal += kettes;
                }
            //for testing
            //printf("binaris[%d]=%c\n",i,binaris[i]);
        kettes *= 2;
        }
        if(max_decimal < decimal){
            max_decimal = decimal;
        }

        printf("Decimális szám: %d\n", decimal);
        }
        
    }

    printf("\n");

    printf("Maximális szám: %d\n", max_decimal);

    return 0;
}