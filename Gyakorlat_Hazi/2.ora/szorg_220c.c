#include <stdio.h>

int main() {
    // https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.20200220c
    // Szorgalmi házi
    int n1 = 0;
    int n2 = 0;

    printf("n1: ");
    scanf("%d", &n1);

    printf("n2: ");
    scanf("%d", &n2);

    if(n1 > n2){
        printf(">\n");
    }
    else if(n1 < n2){
        printf("<\n");
    }
    else{
        printf("=\n");
    }

    return 0;
}