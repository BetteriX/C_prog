#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prog1.h"

void convert(char input[]){
    char elso_betu = input[0];

    for(int i = 1; i < strlen(input); i++){
        if(input[i]==elso_betu){
            input[i] = '$';
        }
    }
}

int main(){
    printf("Szöveg: ");
    char text[100];
    fgets(text, 100, stdin);

    convert(text);

    printf("Kimenet: %s", text);


    return 0;
}