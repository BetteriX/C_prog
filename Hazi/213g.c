#include <stdio.h>

int main(){
    int ossz = 0;

    for(int i = 1; i <= 100; i++){
        ossz = ossz + i;
    }

    printf("%d\n",ossz);

    return 0;
}