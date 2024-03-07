#include <stdio.h>

int duplaz(int input)
{
    return 2*input;
}

int getint()
{
    int n;
    scanf("%d", &n);

    return n;
}

int get_positive_int()
{
    int n = 0;
    do
    {
        printf("Írj be egy számot: ");
        scanf("%d", &n);
    } while (n <= 0);
    
    return n;
}

int main(){
    /*
    printf("Írj be egy számot: ");
    int input = getint(); // 5
    */

   int input2 = get_positive_int();
   //printf("%d\n", duplaz(input2));

    return 0;
}