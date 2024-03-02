#include <stdio.h>

int main() {
    printf("n: ");
    int n;
    scanf("%d", &n);

    for(int i = 1; i <=n; i++)
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
}