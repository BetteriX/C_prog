#include <stdio.h>

int main(){
    // https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200220g
    // 20200220g Házi

    int magassag = 0;
    printf("magassag: ");
    scanf("%d", &magassag);

    for(int i = 1; i <= magassag; i++){
        int szokoz = magassag-i;
        int hashtag = i;

        for(int j = 1; j <= szokoz; j++){
            printf(" ");
        }

        for(int k = 1; k <= hashtag; k++){
            printf("#");
        }


        // Elválasztó
        for (int e = 0; e < 2; e++)
        {
            printf(" ");
        }
        

        for(int g = 1; g <= hashtag; g++){
            printf("#");
        }
        
        printf("\n");
    }

    /*
    for(int i = 0; i <= magassag; i++){
        for(int j = 1; j <= i; j++){
            printf("#");
        }
        printf("\n");
    }
    */

    return 0;
}