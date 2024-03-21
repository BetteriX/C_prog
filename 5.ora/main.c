#include <stdio.h>
#include "prog1.h"
#include <string.h>

#define SIZE 100
int get_int(string prompt){
    printf("%s\n", prompt);
    int n;
    scanf("%d", &n);
    return n;
}

void feltolt(char tomb[]){
    for(int i = 0; i < SIZE; i++){
        tomb[i] = 'a';
    }
}

int my_strlen(string s){
    int i = 0;
    for(i = 0; s[i] != '\0'; i++){

    }
    return i;
}

int is_palindrome(string s){
    int i = 0; int j = strlen(s)-1;
    while(i < j){
        if(s[i] != s[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
    
    /*
    int vege = 0;

    for(int i = 0;s[i] != '\0'; i++){
        vege++;
    }

    char str[vege];

    strcpy(str, s);

    if(str[0] == str[vege -1]){
        return 1;
    }
    else{
        return 0;
    }
    */
}

int find_char(string s, char c){
    for(int i = 0; i < strlen(s)-1;i++){
        if(s[i] == c){
            return i;
        }   
    }

    return -1;
}

int contains_character(string s, char c){
    int i = 0;
    int j = strlen(s) - 1;
    while(i < j){
        if(s[1] == c){
            return 1;
        }
        i++;
    }

    return 0;
}

int main(){
    string a = "anna";
    printf("Palindrom-e az %s: %s\n", a, is_palindrome(a) ? "igen" : "nem" );
    printf("%d\n", find_char(a,'n'));

    /*
    char tomb[SIZE];
    feltolt(tomb);
    string s = get_string("Neved: ");
    
    int n = get_int("Adj meg egy számot: ");

    printf("Hello %s\n", s);
    printf("n=%d\n", n);
    */
    return 0;
}