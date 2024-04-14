// https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200331c
// 20200331c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SIZE 256

int password(char szoveg[]){
    int hossz = strlen(szoveg);

    if(hossz < 8){
        printf("gyenge jelszó\n\n");
        return 1;
    }

    int kis_betu = 0;
    int nagy_betu = 0;
    int szam = 0;

    for(int i = 0; i < hossz;i++){
        if(islower(szoveg[i])){
            kis_betu = 1;
        }
        if(isupper(szoveg[i])){
            nagy_betu = 1;
        }
        if(isdigit(szoveg[i])){
            szam = 1;
        }
    }

    if(kis_betu == 0 || nagy_betu == 0 || szam == 0){
        printf("gyenge jelszó\n\n");
        return 1;
    }

    printf("erős jelszó\n\n");
    return 0;
}

int main(){
    printf("Adj meg jelszavakat '*' végjelig!\n\n");

    char jelszo[SIZE];
    while(1)
    {
        printf("jelszó: ");
        fgets(jelszo, 256, stdin);

        int hossz = strlen(jelszo)-1;
        jelszo[hossz]='\0';
        if(strcmp(jelszo, "*")!=0){
            password(jelszo);
        }
        else{
            break;
        }
    }
    
    return 0;
}