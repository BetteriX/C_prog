#include <stdio.h>

int main() {
    int x;
    printf("Add meg x értékét: ");
    scanf("%d", &x);

    int y;
    printf("Add meg y értékét: ");
    scanf("%d", &y);

    if (x < y){
        printf("x kisebb mint y \n");
    }
    else if(x > y){
        printf("x nagyobb mint y \n");
    }
    else {
        printf("x egyenlő y-nal \n");
    }
    
    return 0;
}
