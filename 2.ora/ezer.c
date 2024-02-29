#include <stdio.h>

int main(){
    int ossz = 0;
    for (int i = 0; i < 1000; i++)
    {
        if(i % 3 == 0 | i % 5 == 0){
            ossz = ossz + i;
        }
    }

    printf("%d\n", ossz);

    return ossz;
}