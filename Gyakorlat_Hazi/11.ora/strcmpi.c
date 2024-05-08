#include <stdio.h>
#include <string.h>
#include <ctype.h>

int strcmpi(const char* s1, const char* s2){
    int s1_hossz = strlen(s1);
    int s2_hossz = strlen(s1);

    if(s1_hossz <  s2_hossz){
        return -1;
    }
    else if(s1_hossz > s2_hossz){
        return 1;
    }
    else{
        for(int i = 0; i < s1_hossz; i++){
            int s1_betu = tolower(s1[i]);
            int s2_betu = tolower(s2[i]);

            if(s1_betu != s2_betu){
                return s1_betu - s2_betu;
            }
        } 
    }

    return 0;
}
 

int main(){
    printf("%d\n", strcmpi("az","ez"));

    return 0;
}