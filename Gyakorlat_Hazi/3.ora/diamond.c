#include <stdio.h>

int main(){
    // https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200213j
    // 20200213j Házi

    int magassag = 0;
    printf("magassag: ");
    scanf("%d", &magassag);

    if(magassag % 2 == 0){
        printf("A magassag nem lehet páros!\n");
        return 1;
    }
    
    printf("\n");

    int fordul = 0;
    int bal_szokoz = magassag/2;
    int jobb_szokoz = magassag/2;
    int csillag = 1;

    for(int i = 1; i <= magassag; i++){

        if(fordul == 0){
            if(bal_szokoz == 0 || jobb_szokoz == 0){
                fordul = 1;
            }
        }

        if(fordul == 1){
            for(int b = 1; b <= bal_szokoz; b++){
                printf(" ");
            }

            for(int cs = 1; cs <= csillag; cs++){
                printf("*");
            }

            for(int j = 1; j <= jobb_szokoz; j++){
                printf(" ");
            }

            bal_szokoz++;
            jobb_szokoz++;
            csillag -= 2;

            printf("\n");
        }

        if(fordul == 0){
            for(int b = 1; b <= bal_szokoz; b++){
                printf(" ");
            }

            for(int cs = 1; cs <= csillag; cs++){
                printf("*");
            }

            for(int j = 1; j <= jobb_szokoz; j++){
                printf(" ");
            }

            bal_szokoz--;
            jobb_szokoz--;
            csillag += 2;

            printf("\n");
        }
    }

    return 0;   
}