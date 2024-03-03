#include <stdio.h>

int main() {
    // https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200220a
    // Házi
    printf("n: ");
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        if(i % 4 == 0)
        {
            printf("%d\n", i);
        }
    }

    /*
    for (int i = 4; i <= n; i += 4)
    {
        printf("%d\n", i);
    }
    */

   return 0;
}