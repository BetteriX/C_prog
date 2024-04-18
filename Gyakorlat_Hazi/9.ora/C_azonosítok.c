// https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200409b
// 20200409b

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_valid_c_identifier(const char* input){
    if(strcmp(input, "*")!=0){
        if(!isalpha(*input) && *input != '_'){
            //printf("Hiba: %c\n", *input);
            return 0;
        }

        input++;

        while(*input != '\0'){
            if(!isalnum(*input) && *input !='_'){
                //printf("Hiba: %c\n", *input);
                return 0;
            }
            input++;
        }

        return 1;
    }

    return -1;
}

int main(){
    char szoveg[256];

    printf("Adj meg sztringeket '*' végjelig!\n\n");

    do
    {
        printf("Input: ");
        fgets(szoveg, 256, stdin);
        szoveg[strlen(szoveg)-1] = '\0';

        if(is_valid_c_identifier(szoveg)==1){
            printf("YES\n\n");
        }
        else if(is_valid_c_identifier(szoveg)==0){
            printf("NO\n\n");
        }
    } while (strcmp(szoveg, "*")!=0);
    
    return 0;
}