// https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200326c
// 20200326c

#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(){
    printf("Adj meg szavakat '*' végjelig!\n");

    char text[SIZE];
    int text_length = 0;
    int text_db = 0;
    while(1)
    {
        printf("Szó: ");
        fgets(text, SIZE, stdin);
        text[strlen(text)-1] = '\0';

        if(strlen(text) > text_length){
            text_length = strlen(text);
        }
        if(strcmp(text, "*")!=0){
            text_db++;
        }
        else{
            break;
        }
    }
    
    printf("\n");

    printf("%d db szót adtál meg. A leghosszabb szó %d karakterből áll.\n", text_db, text_length);


    return 0;
}