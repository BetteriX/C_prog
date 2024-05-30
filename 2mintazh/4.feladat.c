#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* const argv[]){
    if(argc != 2){
        printf("Hiba! Adjál meg egy számot!\n");
        return 1;
    }

    int szam = atoi(argv[1]);
    int talalt = 0;

    for (int i = 1; talalt < szam; i++)
    {
        int osszeg = 0;

        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                osszeg += j;        
            }
            
        }
        
        if (osszeg == i)
        {
            printf("Talált szám: %d\n",i);
            talalt++;
        }
        
    }
    
    
    return 0;
}