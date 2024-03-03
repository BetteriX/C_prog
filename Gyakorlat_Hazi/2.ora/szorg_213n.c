#include <stdio.h>

int main(){
    // https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200213n
    // Szorgalmi házi
    int a = 0;
    int pozitiv_sum = 0;
    int negativ_sum = 0;
    do
    {
        printf("Egesz szam (vege: 0): ");
        scanf("%d", &a);

        if (a > 0)
        {
            pozitiv_sum++;
        }
        else if(a < 0)
        {
            negativ_sum++;
        }
        
    } while (a != 0);
    
    printf("Pozitiv elemek szama: %d\n", pozitiv_sum);
    printf("Negativ elemek szama: %d\n", negativ_sum);

    return 0;
}